//Use a SELECT query with WHERE and LIMIT to fetch the top 2 restaurants in the city 'Ahmedabad' with a rating above 4.0 from the Restaurants table.<br><br><em><strong>Hint:</strong> Combine WHERE for city and rating, and LIMIT to restrict the number of results.</em>


SELECT *
FROM Restaurants
WHERE city = 'Ahmedabad'
AND rating > 4.0
LIMIT 2;
