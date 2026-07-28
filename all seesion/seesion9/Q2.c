//Q2 Create a 2D array called playlistRatings to store ratings for 3 Spotify playlists over 5 days (rows = playlists, columns = days). Fill it with sample numbers and print the ratings for the second playlist.


#include <stdio.h>

int main() {
    
    int playlistRatings[3][5] = {
        {4, 5, 3, 4, 5},  // Playlist 1
        {5, 4, 4, 5, 3},  // Playlist 2
        {3, 4, 5, 4, 4}   // Playlist 3
    };

    printf("Ratings for the second playlist:\n");

    for (int i = 0; i < 5; i++) {
        printf("Day %d: %d\n", i + 1, playlistRatings[1][i]);
    }

    return 0;
}


