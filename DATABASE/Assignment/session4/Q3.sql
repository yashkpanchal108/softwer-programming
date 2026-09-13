//Write a SELECT query to find all songs in the Playlist table where the genre is 'Pop' and play_count is greater than 100. Sort the results by play_count in descending order.

SELECT *
FROM Playlist
WHERE genre = 'Pop'
AND play_count > 100
ORDER BY play_count DESC;

