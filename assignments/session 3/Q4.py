#Write a script that asks the user for their Instagram follower count, converts it to an integer, and prints the count in a formatted string like 'You have 1,500 followers'. Use escape characters to add a new line and tab before the output.<br><br><em><strong>Hint:</strong> Use '\n' for new line and '\t' for tab in your print statement.</em>


# Ask the user for their Instagram follower count
followers = int(input("Enter your Instagram follower count: "))

# Print the follower count using escape characters
print(f"\n\tYou have {followers:,} followers")
