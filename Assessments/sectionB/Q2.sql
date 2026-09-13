//Create an orders table with columns: order_id, restaurant_id, customer_name, total_amount,
//and order_date. Insert at least 12 orders distributed across at least 4 restaurants.
//Write a query to show total revenue and average order value per restaurant.
//Write a query using HAVING to list only restaurants whose total revenue exceeds Rs 5,000.
//Write a query to retrieve the 5 most recent orders using ORDER BY and LIMIT.


CREATE TABLE orders (
     order_id INT AUTO_INCREMENT PRIMARY KEY, 
     restaurant_id INT, customer_name VARCHAR(100),
      total_amount DECIMAL(10,2), order_date DATE );


INSERT INTO orders (restaurant_id, customer_name, total_amount, order_date)
 VALUES (1, 'Ayan', 1800.00, '2026-09-01'), 
        (1, 'yash', 2200.00, '2026-09-03'), 
        (1, 'Priyansh', 1500.00, '2026-09-05'), 
        (2, 'Amit', 2500.00, '2026-09-02'),
        (2, 'Neha', 1800.00, '2026-09-06'),
        (2, 'Raviraj', 1200.00, '2026-09-08'),
        (3, 'Karan', 3000.00, '2026-09-04'),
        (3, 'Maynk', 2700.00, '2026-09-07'),
        (3, 'Jay', 1600.00, '2026-09-10'),
        (4, 'Punit', 2000.00, '2026-09-09'), 
        (4, 'Vikas', 1800.00, '2026-09-11'),
        (4, 'man', 2500.00, '2026-09-13');


        SELECT
         restaurant_id,
          SUM(total_amount) AS total_revenue,
        AVG(total_amount) AS average_order_value
         FROM orders 
         GROUP BY restaurant_id;

        SELECT
        restaurant_id, 
        SUM(total_amount) AS total_revenue
         FROM orders 
         GROUP BY restaurant_id 
         HAVING SUM(total_amount) > 5000;


        SELECT * 
        FROM orders 
        ORDER BY order_date DESC
        LIMIT 5;     