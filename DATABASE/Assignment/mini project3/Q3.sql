//Write an SQL UPDATE statement to rename the 'Chill Vibes' playlist to 'Evening Chill' for a specific user_id.


UPDATE playlists
SET name = 'Evening Chill'
WHERE name = 'Chill Vibes'
AND user_id = 2;

