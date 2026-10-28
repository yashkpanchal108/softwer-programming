#Given the following variables for a YouTube video — title, views, likes, is_premium — identify which are primitive and which are non-primitive data types, and explain your reasoning in comments.

# YouTube video variables
title = "Python Tutorial for Beginners"
views = 10000
likes = 500
is_premium = False

# Identifying primitive and non-primitive data types

# title is a string (str), a primitive data type in this classification,
# because it stores text.

# views is an integer (int), a primitive data type,
# because it stores a whole number.

# likes is an integer (int), a primitive data type,
# because it stores a whole number.

# is_premium is a Boolean (bool), a primitive data type,
# because it stores True or False.

print("Title:", title, "| Data Type:", type(title))
print("Views:", views, "| Data Type:", type(views))
print("Likes:", likes, "| Data Type:", type(likes))
print("Is Premium:", is_premium, "| Data Type:", type(is_premium))
