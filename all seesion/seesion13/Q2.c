// Q2.Open playlist.txt in read mode (r) and display each song name on a separate line in the console.

#include <stdio.h>

int main() {
    // Open the file in read mode ("r")
    FILE *file = fopen("playlist.txt", "r");

    // Check if the file exists and opened successfully
    if (file == NULL) {
        printf("Error: Could not open playlist.txt. Make sure the file exists!\n");
        return 1;
    }

    // Buffer to hold each line (song name) as it is read
    char song[100];

    printf("--- My Spotify Playlist ---\n");

    // Read line by line until the end of the file (EOF)
    while (fgets(song, sizeof(song), file) != NULL) {
        // Print the song name
        printf("%s", song);
    }

    // Close the file connection
    fclose(file);

    return 0;
}
