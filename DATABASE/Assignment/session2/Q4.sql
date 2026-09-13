//Create a new table called 'playlists' for a music app like Spotify, with columns: playlist_id (INT, primary key, auto-increment), title (VARCHAR(50)), created_by (VARCHAR(50)), and created_at (DATE).

CREATE TABLE playlists(
	playlist_id int PRIMARY KEY AUTO_INCREMENT,
    title VARCHAR(50),
    created_by VARCHAR(50),
	created_at DATE
);
