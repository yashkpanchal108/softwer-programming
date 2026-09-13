//Create two tables in SQL: influencers (with influencer_id as PRIMARY KEY and name) and posts (with post_id as PRIMARY KEY, influencer_id as FOREIGN KEY, and caption). Insert at least 3 influencers and 2 posts for each influencer.

CREATE TABLE influencers (
    influencer_id INT PRIMARY KEY AUTO_INCREMENT,
    name VARCHAR(100)
);
INSERT INTO influencers (name)
VALUES
('Ayan Shekh'),
('Rahul Patel'),
('Priya Mehta');

CREATE TABLE posts (
    post_id INT PRIMARY KEY AUTO_INCREMENT,
    influencer_id INT,
    caption VARCHAR(255),
    FOREIGN KEY (influencer_id) REFERENCES influencers(influencer_id)
);

INSERT INTO posts (influencer_id, caption)
VALUES
(1, 'My new Instagram post!'),
(1, 'Enjoying a beautiful day!'),
(2, 'Travel memories 📸'),
(2, 'New content coming soon!'),
(3, 'Fashion and lifestyle ✨'),
(3, 'Having a wonderful day!');
