//Q1 Declare a structure named Playlist to store details of a song: title (string), artist (string), and duration in seconds (integer). Initialize one Playlist variable with your favorite song's details and print each field.


#include <stdio.h>
#include <string.h>

struct Playlist {
    char title[100];
    char artist[100];
    int duration;
};

int main() {
    struct Playlist song;

    strcpy(song.title, "Blinding Lights");
    strcpy(song.artist, "The Weeknd");
    song.duration = 200;

    printf("Song Title: %s\n", song.title);
    printf("Artist: %s\n", song.artist);
    printf("Duration: %d seconds\n", song.duration);

    return 0;
}
