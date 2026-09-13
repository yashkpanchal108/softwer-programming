//Insert 6 rows into a table called SpotifyUser with columns: user_id, username, email, and subscription_type. Ensure that username is UNIQUE and email is NOT NULL.<br><br><em><strong>Hint:</strong> Use the UNIQUE and NOT NULL constraints when creating the table.</em>


CREATE TABLE SpotifyUser (
    user_id INT PRIMARY KEY,
    username VARCHAR(100) UNIQUE,
    email VARCHAR(100) NOT NULL,
    subscription_type VARCHAR(50)
);

INSERT INTO SpotifyUser (user_id, username, email, subscription_type)
VALUES
(1, 'ayan_music', 'ayan@gmail.com', 'Premium'),
(2, 'yash_beats', 'yash@gmail.com', 'Free'),
(3, 'priyansh_songs', 'priyansh@gmail.com', 'Premium'),
(4, 'jay_music', 'jay@gmail.com', 'Free'),
(5, 'neha_playlist', 'neha@gmail.com', 'Premium'),
(6, 'rohan_tunes', 'rohan@gmail.com', 'Free');

