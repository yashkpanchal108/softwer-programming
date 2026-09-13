//Create a SQL query using GROUP BY to show the total number of orders placed by each user in an 'orders' table, displaying user_id and order_count.

SELECT user_id, COUNT(*) AS order_count
FROM orders
GROUP BY user_id;
