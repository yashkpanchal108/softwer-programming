#Write a function called format_follower_count that takes a number and returns it in Instagram-style format (e.g., 1500 as '1.5K', 1200000 as '1.2M').<br><br><em><strong>Hint:</strong> Use if-elif-else to check the number range and format accordingly.</em>

def format_follower_count(number):
    if number >= 1000000:
        return f"{number / 1000000:.1f}M"
    elif number >= 1000:
        return f"{number / 1000:.1f}K"
    else:
        return str(number)


print(format_follower_count(1500))
print(format_follower_count(1200000))
print(format_follower_count(500))

