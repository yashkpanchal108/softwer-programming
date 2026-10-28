#Build a small snippet that creates three variables representing a Spotify playlist: playlist_title, number_of_songs, and is_public. Use the id() function to print the memory address of each variable.


playlist_title = "My Favorite Songs"
number_of_songs = 25
is_public = True

print("Playlist Title:", playlist_title)
print("Memory Address:", id(playlist_title))

print("Number of Songs:", number_of_songs)
print("Memory Address:", id(number_of_songs))

print("Is Public:", is_public)
print("Memory Address:", id(is_public))
