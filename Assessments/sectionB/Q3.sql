//Create two tables: restaurants (restaurant_id, name, city) and menu_items (item_id,
//restaurant_id, item_name, price, category). Link them with a FOREIGN KEY on restaurant_id.
//Insert at least 5 restaurants and 12 menu items; at least one restaurant must have no menu items.
//Write an INNER JOIN query listing restaurant name, item name, and price for all available items.
//Write a LEFT JOIN query so that restaurants with no items also appear in results, with NULL
//values in item columns.
//Create a VIEW named restaurant_menu_summary showing restaurant name, total number of
//menu items, and average item price grouped by restaurant.




CREATE TABLE restaurants (
    restaurant_id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(100) NOT NULL,
    city VARCHAR(100)
);

CREATE TABLE menu_items (
    item_id INT AUTO_INCREMENT PRIMARY KEY,
    restaurant_id INT,
    item_name VARCHAR(100),
    price DECIMAL(10,2),
    category VARCHAR(50),
    FOREIGN KEY (restaurant_id) REFERENCES restaurants(restaurant_id)
);

INSERT INTO menu_items
(restaurant_id, item_name, price, category)
VALUES
(1, 'Paneer Tikka', 250, 'Starter'),
(1, 'Butter Naan', 80, 'Bread'),
(1, 'Veg Biryani', 220, 'Main Course'),
(2, 'Margherita Pizza', 350, 'Pizza'),
(2, 'Farmhouse Pizza', 450, 'Pizza'),
(2, 'Garlic Bread', 150, 'Starter'),
(3, 'Hakka Noodles', 280, 'Main Course'),
(3, 'Manchurian', 240, 'Starter'),
(4, 'Raita', 80, 'Side Dish'),
(5, 'Veg Sushi', 400, 'Sushi');


SELECT 
    restaurants.name AS restaurant_name,
    menu_items.item_name,
    menu_items.price
FROM restaurants
INNER JOIN menu_items
ON restaurants.restaurant_id = menu_items.restaurant_id;

SELECT
    restaurants.name AS restaurant_name,
    menu_items.item_name,
    menu_items.price,
    menu_items.category
FROM restaurants
LEFT JOIN menu_items
ON restaurants.restaurant_id = menu_items.restaurant_id;

CREATE VIEW restaurant_menu_summary AS
SELECT
    restaurants.name AS restaurant_name,
    COUNT(menu_items.item_id) AS total_menu_items,
    AVG(menu_items.price) AS average_item_price
FROM restaurants
LEFT JOIN menu_items
ON restaurants.restaurant_id = menu_items.restaurant_id
GROUP BY restaurants.restaurant_id, restaurants.name;
