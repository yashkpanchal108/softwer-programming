//Create another table in the InstaClone database called Posts with columns: post_id (INT, primary key), user_id (INT), caption (VARCHAR), and post_date (DATE). Add a foreign key from Posts.user_id to Users.user_id to establish a relationship.

CREATE TABLE Posts (
    post_id INT PRIMARY KEY AUTO_INCREMENT,
    user_id INT,
    caption VARCHAR(255),
    post_date DATE,
    FOREIGN KEY (user_id) REFERENCES Users(user_id)
);