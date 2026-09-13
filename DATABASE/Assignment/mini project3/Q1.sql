//Create a MySQL table called playlists to store Spotify-style music playlists, with columns: playlist_id (primary key), user_id (foreign key), name (varchar), and created_at (datetime). Write the CREATE TABLE statement.

CREATE TABLE playlists (
    playlist_id INT PRIMARY KEY AUTO_INCREMENT,
    user_id INT,
    name VARCHAR(100),
    created_at DATETIME,
    FOREIGN KEY (user_id) REFERENCES Users(user_id)
);
