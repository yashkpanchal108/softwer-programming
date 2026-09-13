//Create a table called Playlist with columns: id, song_name, artist, genre, and play_count. Insert at least 5 sample records representing your favorite songs from Spotify.

CREATE TABLE Playlist (
    id INT AUTO_INCREMENT PRIMARY KEY,
    song_name VARCHAR(100),
    artist VARCHAR(100),
    genre VARCHAR(50),
    play_count INT
);


INSERT INTO Playlist (song_name, artist, genre, play_count)
VALUES
('Blinding Lights', 'The Weeknd', 'Pop', 125),
('Perfect', 'Ed Sheeran', 'Pop', 98),
('Believer', 'Imagine Dragons', 'Rock', 87),
('Kesariya', 'Arijit Singh', 'Bollywood', 156),
('Heeriye', 'Jasleen Royal', 'Indie Pop', 112);