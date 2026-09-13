//Create a database named foodapp_db and a table named restaurants with columns:
//restaurant_id (INT, AUTO_INCREMENT, PRIMARY KEY), name (VARCHAR, NOT NULL), city
//(VARCHAR), cuisine_type (VARCHAR), and rating (DECIMAL(3,1)).
//Insert at least 6 restaurant records spanning at least 3 different cities.
//Update the rating of one restaurant and delete one restaurant record using a WHERE condition.
//Write a SELECT query that retrieves all restaurants sorted by rating in descending order.


CREATE DATABASE foodapp_db;

CREATE TABLE restaurants (
    restaurant_id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(100) NOT NULL,
    city VARCHAR(100),
    cuisine_type VARCHAR(100),
    rating DECIMAL(3,1)
);

INSERT INTO restaurants (name, city, cuisine_type, rating)
VALUES
('Spice Villa', 'Ahmedabad', 'Indian', 4.5),
('Pizza Corner', 'Surat', 'Italian', 4.2),
('Dragon Palace', 'Vadodara', 'Chinese', 4.7),
('gujrati dish', 'Ahmedabad', 'Mexican', 4.1),
('Royal dhosa', 'Rajkot', 'Indian', 4.6),
('Sushi World', 'Surat', 'Japanese', 4.8);

UPDATE restaurants
SET rating = 4.9
WHERE name = 'Spice Villa';

DELETE FROM restaurants
WHERE name = 'Taco Fiesta';

SELECT *
FROM restaurants
ORDER BY rating DESC;