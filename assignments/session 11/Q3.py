#Write a function display_friends() that takes a dictionary of Instagram usernames as keys and their follower counts as values, and prints each username with their followers in the format: 'username: 2.3K followers'.

def display_friends(friends):
    for username, followers in friends.items():
        print(f"{username}: {followers / 1000:.1f}K followers")


instagram_friends = {
    "rahul": 2300,
    "krish": 4500,
    "yash": 1800
}

display_friends(instagram_friends)

