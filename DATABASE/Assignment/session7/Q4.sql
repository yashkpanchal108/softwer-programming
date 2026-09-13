//Create a VIEW named TopSpendersView that shows usernames and order_total from a FoodOrder table where order_total is greater than 1000.

CREATE VIEW TopSpendersView AS
SELECT SpotifyUser.username, FoodOrder.order_total
FROM SpotifyUser
INNER JOIN FoodOrder
ON SpotifyUser.user_id = FoodOrder.user_id
WHERE FoodOrder.order_total > 1000;

