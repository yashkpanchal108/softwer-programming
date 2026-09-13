//Create a SQL table called Restaurants with columns: id (INT, auto-increment), name (VARCHAR), cuisine (VARCHAR), rating (DECIMAL), and city (VARCHAR). Insert 5 sample restaurants into the table, each with a different cuisine and rating.

CREATE TABLE Restaurants (
    id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(100),
    cuisine VARCHAR(100),
    rating DECIMAL(3,1),
    city VARCHAR(100)
);


INSERT INTO Restaurants (name, cuisine, rating, city)
VALUES
('The Green Leaf', 'Indian', 4.5, 'Ahmedabad'),
('Pizza House', 'Italian', 4.2, 'Surat'),
('Dragon Palace', 'Chinese', 4.7, 'Vadodara'),
('Taco Fiesta', 'Mexican', 4.1, 'Rajkot'),
('Sushi World', 'Japanese', 4.8, 'Gandhinagar');

