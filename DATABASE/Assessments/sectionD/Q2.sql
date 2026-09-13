// Then, working without AI, test the stored procedure and find at least one bug, limitation, 
// or improvement in the AI's solution. Fix it yourself. 
// SUBMIT 1 The exact prompt(s) you gave the AI tool.
// 2 The AI's original stored procedure code and your corrected/improved version.
//  All 3 items required 3 A 3–4 line note explaining what you changed and why the AI's version needed improvement.

Write a MySQL stored procedure that accepts a restaurant_id and a month number (1–12) as inputs and returns a summary showing total orders,
 total revenue, and average order value for that restaurant in that month.
  Handle the case where the restaurant has no orders in that month by returning a meaningful message instead of an empty result.
 Use SELECT with GROUP BY and aggregate functions to compute the summary values correctly.
  The procedure should run successfully in MySQL Workbench.


  AI CODE:

  USE foodapp_db;

DELIMITER //

CREATE PROCEDURE GetMonthlyRestaurantSummary(
    IN p_restaurant_id INT,
    IN p_month INT
)
BEGIN
    SELECT
        restaurant_id,
        COUNT(order_id) AS total_orders,
        SUM(total_amount) AS total_revenue,
        AVG(total_amount) AS average_order_value
    FROM orders
    WHERE restaurant_id = p_restaurant_id
    AND MONTH(order_date) = p_month
    GROUP BY restaurant_id;
END //

DELIMITER ;


MY CODE:


USE foodapp_db;

DELIMITER //

CREATE PROCEDURE GetMonthlyRestaurantSummary(
    IN p_restaurant_id INT,
    IN p_month INT
)
BEGIN
    DECLARE order_count INT;

    SELECT COUNT(*)
    INTO order_count
    FROM orders
    WHERE restaurant_id = p_restaurant_id
    AND MONTH(order_date) = p_month;

    IF order_count = 0 THEN

        SELECT 'No orders found for this restaurant in the selected month.' AS message;

    ELSE

        SELECT
            restaurant_id,
            COUNT(order_id) AS total_orders,
            SUM(total_amount) AS total_revenue,
            AVG(total_amount) AS average_order_value
        FROM orders
        WHERE restaurant_id = p_restaurant_id
        AND MONTH(order_date) = p_month
        GROUP BY restaurant_id;

    END IF;
END //

DELIMITER ;
