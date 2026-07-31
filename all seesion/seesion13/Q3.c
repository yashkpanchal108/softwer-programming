// Q3.Add two more song names to playlist.txt without deleting the existing ones by opening the file in append mode (a).

#include <stdio.h>

int main() {
    // Open the file in append mode ("a")
    // This preserves existing content and moves the file pointer to the end
    FILE *file = fopen("playlist.txt", "a");

    // Check if the file opened successfully
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Append two new song names to the file
    fprintf(file, "Stayin' Alive\n");
    fprintf(file, "Shape of You\n");

    // Close the file connection
    fclose(file);

    printf("Successfully appended 2 more songs to playlist.txt!\n");
    return 0;
}