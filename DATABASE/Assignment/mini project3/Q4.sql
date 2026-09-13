//Write a DELETE statement to remove a playlist named 'Workout Mix' for a given user_id from the playlists table.<br><br><em><strong>Hint:</strong> Make sure your WHERE clause targets only the intended row.</em>


DELETE FROM playlists
WHERE name = 'Workout Mix'
AND user_id = 1;
