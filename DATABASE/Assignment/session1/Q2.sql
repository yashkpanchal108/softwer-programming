//Create a new database called InstaClone in MySQL Workbench, then create a table named Users with columns: user_id (INT, primary key), username (VARCHAR), email (VARCHAR), and followers_count (INT).

Create database InstaClone;

Create table Users(
user_id int (11) primary key AUTO_INCREMENT,
user_name VARCHAR(255) not null,
user_email varchar(255),
followers_count INT
);