//Write a SQL query to display the names of restaurants from a 'restaurants' table that have received an average rating above 4.0, using GROUP BY and HAVING.

SELECT name, AVG(rating) AS average_rating
FROM restaurants
GROUP BY name
HAVING AVG(rating) > 4.0;
