//Write a SELECT query that shows the total number of plays (SUM of play_count) for each genre in your Playlist table, grouped by genre.<br><br><em><strong>Hint:</strong> Use GROUP BY with the SUM function to aggregate play counts by genre.</em>

SELECT genre, SUM(play_count) AS total_plays
FROM Playlist
GROUP BY genre;
