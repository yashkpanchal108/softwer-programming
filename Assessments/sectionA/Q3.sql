//Which SQL clauses and aggregate functions would you use to produce this report?
//Explain why HAVING must be used here rather than WHERE to filter by aggregate results.


To produce this report, I would use the SELECT, GROUP BY, and HAVING clauses along with aggregate functions such as COUNT(), SUM(), and AVG().

COUNT() → Calculates the total number of records.
SUM() → Calculates the total of numeric values.
AVG() → Calculates the average value.
GROUP BY → Groups records based on a specific column or category.
HAVING → Filters the results after aggregate functions are applied.
Example:
SELECT user_id, COUNT(*) AS order_count
FROM orders
GROUP BY user_id
HAVING COUNT(*) > 5;

This query counts the number of orders for each user and displays only users who have placed more than 5 orders.

Why use HAVING instead of WHERE?

The WHERE clause filters individual rows before grouping, while the HAVING clause filters groups after the GROUP BY operation.

Therefore, this is incorrect:

WHERE COUNT(*) > 5

The correct statement is:

HAVING COUNT(*) > 5

Conclusion:
The HAVING clause must be used when we need to filter results based on aggregate functions such as COUNT(), SUM(), or AVG()