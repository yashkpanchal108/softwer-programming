//Using a nested subquery, display the names of movies from a 'movies' table that have a higher average rating than the overall average rating of all movies.<br><br><em><strong>Hint:</strong> Use a subquery to calculate the overall average rating, then compare each movie's average rating against it in the main query.</em>

SELECT name, AVG(rating) AS average_rating
FROM movies
GROUP BY name
HAVING AVG(rating) > (
    SELECT AVG(rating)
    FROM movies
);
