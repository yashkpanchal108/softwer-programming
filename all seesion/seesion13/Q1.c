//Q1.Create a file called playlist.txt and write the names of your top 3 favorite songs from Spotify into it using write mode (w).

#include <stdio.h>

int main() {
    // Open the file in write mode ("w")
    // This creates a new file or overwrites it if it already exists
    FILE *file = fopen("playlist.txt", "w");

    // Check if the file opened successfully
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write the top 3 favorite songs into the file
    fprintf(file, "Bohemian Rhapsody\n");
    fprintf(file, "Blinding Lights\n");
    fprintf(file, "Hotel California\n");

    // Always close the file after operations are complete
    fclose(file);

    printf("Successfully created playlist.txt and added 3 songs!\n");
    return 0;
}
