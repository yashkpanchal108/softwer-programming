//Justify your constraint choices for at least three columns across two tables. What
//data integrity problems would arise if these constraints were not applied?

-- 1. Restaurant.id – PRIMARY KEY
-- The id column is a PRIMARY KEY because every restaurant must have a unique ID.
-- Without this constraint, duplicate or NULL IDs could occur, making it difficult to identify a specific restaurant.

-- 2. Restaurant.name – NOT NULL
-- The name column is set to NOT NULL because every restaurant should have a name.
-- Without this constraint, restaurants could be stored without names, causing incomplete or confusing records.

-- 3. FoodOrder.restaurant_id – FOREIGN KEY
-- The restaurant_id column is a FOREIGN KEY referencing Restaurant.id.
-- Without this constraint, an order could reference a restaurant that does not exist, creating invalid or orphan records.

-- 4. SpotifyUser.username – UNIQUE
-- The username column is UNIQUE so that two users cannot have the same username.
-- Without it, duplicate usernames could make it difficult to identify users correctly.

-- Conclusion:
-- These constraints prevent duplicate, missing, and invalid data and help maintain data integrity and consistency between tables.