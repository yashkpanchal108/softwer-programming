//  BUILD WITH AI ASSESSMENT FILE Software Engineering M5-A1 Use an AI tool of your choice
//   (ChatGPT, Claude, GitHub Copilot, etc.) to help you write a stored procedure that: Accepts a restaurant_id 
//   and a month number (1–12) as inputs and returns a summary showing total orders, total revenue, 
//   and average order value for that restaurant in that month.
//    Handles the case where the restaurant has no orders in that month by returning a meaningful message rather than an empty result.
//  Uses a SELECT with GROUP BY and aggregate functions to compute the summary values correctly.
//   Runs successfully in MySQL Workbench — screenshot output for at least two different restaurant_id and month combinations.



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