//Q3.3 Write a program that stores your favorite Spotify playlist's name (string), total number of songs (int), and average song duration in minutes (float). Print all values in a single formatted sentence.


#include <stdio.h>

int main() {
    // Variables
    char playlistName[] = "tops 2026";
    int totalSongs = 25;
    float avgDuration = 3.8;

    // Print all values in a single formatted sentence
    printf("My favorite Spotify playlist is \"%s\", it contains %d songs, and the average song duration is %.1f minutes.\n",
           playlistName, totalSongs, avgDuration);

           return 0;
}       


