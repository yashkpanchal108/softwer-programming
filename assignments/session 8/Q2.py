#Write a function extract_artist(song_title) that takes a string in the format 'Song Name - Artist Name' (like you see on Spotify) and returns just the artist's name using string slicing.<br><br><em><strong>Hint:</strong> Use the index() method to find the position of the dash.</em>


def extract_artist(song_title):
    dash = song_title.index("-")
    artist = song_title[dash + 2:]
    return artist

song = "Perfect - Ed Sheeran"
print(extract_artist(song))
