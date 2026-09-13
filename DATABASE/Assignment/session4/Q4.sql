//Use the COUNT aggregate function to find out how many songs in your Playlist table belong to the genre 'Hip-Hop'.

SELECT COUNT(*) AS total_songs
FROM Playlist
WHERE genre = 'Hip-Hop';

