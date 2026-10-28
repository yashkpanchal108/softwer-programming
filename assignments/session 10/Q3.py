#Try to change the first element of your fav_apps tuple to 'YouTube' and observe the error message. Write a comment explaining why this happens based on tuple immutability.


fav_apps = ('Instagram', 'Zomato', 'Spotify', 'WhatsApp', 'Flipkart')

fav_apps[0] = 'YouTube'

# Error: TypeError: 'tuple' object does not support item assignment
# This happens because tuples are immutable, meaning their elements cannot be changed after creation.
