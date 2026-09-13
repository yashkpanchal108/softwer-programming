//Simulate a Zomato-style food order process: insert two new items into an OrderItems table, then use ROLLBACK to undo the changes before committing. Check that no new items remain in the table after rollback.

INSERT INTO OrderItems (item_id, order_id, item_name)
VALUES (1, 101, 'Pizza');

INSERT INTO OrderItems (item_id, order_id, item_name)
VALUES (2, 101, 'Burger');

ROLLBACK;

SELECT * FROM OrderItems
WHERE order_id = 101;

