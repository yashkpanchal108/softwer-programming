//Write a SQL query to list all users from the TopSpendersView who have spent more than 2000, sorted by order_total descending.<br><br><em><strong>Constraint:</strong> Only use the TopSpendersView for your query, not the original FoodOrder table.</em>

SELECT username, order_total
FROM TopSpendersView
WHERE order_total > 2000
ORDER BY order_total DESC;

