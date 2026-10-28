#Given the string user_bio = 'Music lover | Foodie | Traveller', use a for loop to count and print the number of characters (excluding spaces) in the bio.<br><br><em><strong>Hint:</strong> Use an if statement inside the loop to skip spaces.</em>

user_bio = "Music lover | Foodie | Traveller"

count = 0

# Count characters, excluding spaces
for char in user_bio:
    if char != " ":
        count += 1

print("Number of characters (excluding spaces):", count)
