//Create a stored procedure named GetMonthlyPlaylistCount that takes a user_id and a month (as an integer) as input, and returns the total number of playlists the user created in that month.<br><br><em><strong>Hint:</strong> Use the MONTH() function in your WHERE clause.</em>

DELIMITER //

CREATE PROCEDURE GetMonthlyPlaylistCount(
    IN p_user_id INT,
    IN p_month INT
)
BEGIN
    SELECT COUNT(*) AS total_playlists
    FROM playlists
    WHERE user_id = p_user_id
    AND MONTH(created_at) = p_month;
END //

DELIMITER ;
