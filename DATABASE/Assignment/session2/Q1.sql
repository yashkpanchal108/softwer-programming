//Open MySQL Workbench or CLI and write a CREATE TABLE statement to create a table called 'restaurants' with columns: id (INT, primary key, auto-increment), name (VARCHAR(100)), location (VARCHAR(100)), and rating (DECIMAL(2,1)).

CREATE TABLE restaurants(
	id int PRIMARY KEY AUTO_INCREMENT,
    name VARCHAR(100),
    location VARCHAR(100),
	rating DECIMAl(2,1)
);