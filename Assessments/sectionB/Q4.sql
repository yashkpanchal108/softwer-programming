//Create a stored procedure named place_order that accepts customer_id, restaurant_id, and amount as parameters.
//Deduct the amount from the customer's wallet_balance in a customers table and insert a new record into the orders table.
//Use a transaction block: if the customer's wallet_balance is insufficient, ROLLBACK everything;otherwise COMMIT.
//Test with a valid order and an order exceeding wallet balance. Screenshot both outcomes from MySQL Workbench.




CREATE TABLE customers (
    customer_id INT AUTO_INCREMENT PRIMARY KEY,
    customer_name VARCHAR(100),
    wallet_balance DECIMAL(10,2)
);

CREATE TABLE orders (
    order_id INT AUTO_INCREMENT PRIMARY KEY,
    customer_id INT,
    restaurant_id INT,
    amount DECIMAL(10,2),
    order_date DATETIME,
    FOREIGN KEY (customer_id) REFERENCES customers(customer_id),
    FOREIGN KEY (restaurant_id) REFERENCES restaurants(restaurant_id)
);

INSERT INTO customers (customer_name, wallet_balance)
VALUES
('Ayan', 5000.00),
('Rahul', 3000.00);

DELIMITER //

CREATE PROCEDURE place_order(
    IN p_customer_id INT,
    IN p_restaurant_id INT,
    IN p_amount DECIMAL(10,2)
)
BEGIN
    DECLARE current_balance DECIMAL(10,2);

    START TRANSACTION;

    SELECT wallet_balance
    INTO current_balance
    FROM customers
    WHERE customer_id = p_customer_id
    FOR UPDATE;

    IF current_balance >= p_amount THEN

        UPDATE customers
        SET wallet_balance = wallet_balance - p_amount
        WHERE customer_id = p_customer_id;

        INSERT INTO orders
        (customer_id, restaurant_id, amount, order_date)
        VALUES
        (p_customer_id, p_restaurant_id, p_amount, NOW());

        COMMIT;

        SELECT 'Order placed successfully' AS message;

    ELSE

        ROLLBACK;

        SELECT 'Insufficient wallet balance - Order cancelled' AS message;

    END IF;
END //

DELIMITER ;

CALL place_order(1, 1, 2000.00);

CALL place_order(2, 2, 5000.00);

SELECT * FROM customers;

SELECT * FROM orders;