// Create three tables: restaurants (restaurant_id, name, city, cuisine_type, created_at),
// menu_items (item_id, restaurant_id, item_name, price, category) 
// with a FOREIGN KEY on restaurant_id, and
// orders (order_id, customer_name, restaurant_id, item_id, quantity, total_amount, order_date) 
// with a FOREIGN KEY on restaurant_id — all with appropriate PRIMARY KEY and NOT NULL constraints.
// Populate with at least 3 restaurants, 4 menu categories, and 15 order records distributed across restaurants.
// Create a VIEW named restaurant_sales_summary showing restaurant name, total number of orders,
// and total revenue grouped by restaurant. Write a stored procedure named add_order that accepts customer_name, 
// restaurant_id, item_id, and quantity, calculates total_amount from the menu item price, 
// validates the restaurant exists (ROLLBACK if not), and inserts the order record.
//  Write a TRIGGER named after_order_insert that logs a record into an order_audit table
//   (order_id, restaurant_id, action='INSERT', log_time=NOW()) immediately after every new order is created.




CREATE DATABASE foodapp_db;



CREATE TABLE restaurants (
    restaurant_id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(100) NOT NULL,
    city VARCHAR(100) NOT NULL,
    cuisine_type VARCHAR(100) NOT NULL,
    created_at DATETIME NOT NULL
);

CREATE TABLE menu_items (
    item_id INT AUTO_INCREMENT PRIMARY KEY,
    restaurant_id INT NOT NULL,
    item_name VARCHAR(100) NOT NULL,
    price DECIMAL(10,2) NOT NULL,
    category VARCHAR(50) NOT NULL,
    FOREIGN KEY (restaurant_id) REFERENCES restaurants(restaurant_id)
);

CREATE TABLE orders (
    order_id INT AUTO_INCREMENT PRIMARY KEY,
    customer_name VARCHAR(100) NOT NULL,
    restaurant_id INT NOT NULL,
    item_id INT NOT NULL,
    quantity INT NOT NULL,
    total_amount DECIMAL(10,2) NOT NULL,
    order_date DATETIME NOT NULL,
    FOREIGN KEY (restaurant_id) REFERENCES restaurants(restaurant_id),
    FOREIGN KEY (item_id) REFERENCES menu_items(item_id)
);

CREATE TABLE order_audit (
    order_id INT NOT NULL,
    restaurant_id INT NOT NULL,
    action VARCHAR(20) NOT NULL,
    log_time DATETIME NOT NULL
);

INSERT INTO restaurants
(name, city, cuisine_type, created_at)
VALUES
('Spice Villa', 'Ahmedabad', 'Indian Veg', NOW()),
('Pizza Corner', 'Surat', 'Italian Veg', NOW()),
('Green Palace', 'Vadodara', 'Chinese Veg', NOW());

INSERT INTO menu_items
(restaurant_id, item_name, price, category)
VALUES
(1, 'Paneer Tikka', 250.00, 'Starter'),
(1, 'Veg Biryani', 220.00, 'Main Course'),
(1, 'Butter Naan', 80.00, 'Bread'),
(1, 'Gulab Jamun', 100.00, 'Dessert'),

(2, 'Margherita Pizza', 350.00, 'Pizza'),
(2, 'Farmhouse Pizza', 450.00, 'Pizza'),
(2, 'Garlic Bread', 150.00, 'Starter'),
(2, 'Chocolate Cake', 200.00, 'Dessert'),

(3, 'Veg Hakka Noodles', 280.00, 'Main Course'),
(3, 'Veg Manchurian', 240.00, 'Starter'),
(3, 'Veg Spring Rolls', 180.00, 'Starter'),
(3, 'Veg Fried Rice', 250.00, 'Main Course');

INSERT INTO orders
(customer_name, restaurant_id, item_id, quantity, total_amount, order_date)
VALUES
('Ayan', 1, 1, 2, 500.00, '2026-09-01 10:00:00'),
('Rahul', 1, 2, 1, 220.00, '2026-09-02 11:00:00'),
('Priya', 1, 3, 3, 240.00, '2026-09-03 12:00:00'),
('Amit', 1, 4, 2, 200.00, '2026-09-04 13:00:00'),
('Neha', 1, 1, 1, 250.00, '2026-09-05 14:00:00'),

('Ravi', 2, 5, 2, 700.00, '2026-09-06 15:00:00'),
('Karan', 2, 6, 1, 450.00, '2026-09-07 16:00:00'),
('Meena', 2, 7, 2, 300.00, '2026-09-08 17:00:00'),
('Jay', 2, 8, 1, 200.00, '2026-09-09 18:00:00'),
('Pooja', 2, 5, 1, 350.00, '2026-09-10 19:00:00'),

('Vikas', 3, 9, 2, 560.00, '2026-09-11 20:00:00'),
('Sneha', 3, 10, 1, 240.00, '2026-09-12 10:30:00'),
('Dev', 3, 11, 3, 540.00, '2026-09-12 11:30:00'),
('Mihir', 3, 12, 2, 500.00, '2026-09-13 12:30:00'),
('Riya', 3, 9, 1, 280.00, '2026-09-13 13:30:00');

CREATE VIEW restaurant_sales_summary AS
SELECT
    restaurants.name AS restaurant_name,
    COUNT(orders.order_id) AS total_orders,
    SUM(orders.total_amount) AS total_revenue
FROM restaurants
LEFT JOIN orders
ON restaurants.restaurant_id = orders.restaurant_id
GROUP BY restaurants.restaurant_id, restaurants.name;

SELECT *
FROM restaurant_sales_summary;

DELIMITER //

CREATE PROCEDURE add_order(
    IN p_customer_name VARCHAR(100),
    IN p_restaurant_id INT,
    IN p_item_id INT,
    IN p_quantity INT
)
BEGIN
    DECLARE restaurant_count INT;
    DECLARE item_price DECIMAL(10,2);
    DECLARE calculated_total DECIMAL(10,2);

    START TRANSACTION;

    SELECT COUNT(*)
    INTO restaurant_count
    FROM restaurants
    WHERE restaurant_id = p_restaurant_id;

    IF restaurant_count = 0 THEN

        ROLLBACK;

        SELECT 'Restaurant does not exist - Order cancelled' AS message;

    ELSE

        SELECT price
        INTO item_price
        FROM menu_items
        WHERE item_id = p_item_id;

        SET calculated_total = item_price * p_quantity;

        INSERT INTO orders
        (customer_name, restaurant_id, item_id, quantity, total_amount, order_date)
        VALUES
        (p_customer_name, p_restaurant_id, p_item_id,
         p_quantity, calculated_total, NOW());

        COMMIT;

        SELECT 'Order added successfully' AS message;

    END IF;
END //

DELIMITER ;

DELIMITER //

CREATE TRIGGER after_order_insert
AFTER INSERT ON orders
FOR EACH ROW
BEGIN
    INSERT INTO order_audit
    (order_id, restaurant_id, action, log_time)
    VALUES
    (NEW.order_id, NEW.restaurant_id, 'INSERT', NOW());
END //

DELIMITER ;

CALL add_order('Ayan', 1, 1, 2);

CALL add_order('Rahul', 99, 1, 1);

SELECT *
FROM orders;

SELECT *
FROM order_audit;