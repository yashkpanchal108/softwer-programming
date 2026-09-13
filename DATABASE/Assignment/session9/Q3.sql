//In a Flipkart-like shopping cart scenario, use SAVEPOINT to mark a point after adding a product to the Cart table, add another product, then use ROLLBACK TO SAVEPOINT to undo only the last addition. Show the final contents of the Cart table.


INSERT INTO Cart (cart_id, user_id, product_name)
VALUES (1, 1, 'iPhone');

SAVEPOINT product_added;

INSERT INTO Cart (cart_id, user_id, product_name)
VALUES (2, 1, 'Laptop');

ROLLBACK TO SAVEPOINT product_added;

SELECT * FROM Cart;
