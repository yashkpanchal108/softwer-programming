//Create a SQL script to insert a new order into an Orders table, then use COMMIT to save the transaction and verify that the new order persists after reconnecting to the database.

INSERT INTO Orders (order_id, user_id)
VALUES (101, 1);
