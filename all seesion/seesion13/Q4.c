// Q4.Write a program that reads all song names from playlist.txt and prints only those that contain the word 'love' (case-insensitive).<br><br><em><strong>Hint:</strong> Use the 'in' keyword or equivalent string method for filtering.</em>

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to convert a string to lowercase
void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower((unsigned char)str[i]);
    }
}

int main() {
    // Open the file in read mode ("r")
    FILE *file = fopen("playlist.txt", "r");

    // Check if the file exists and opened successfully
    if (file == NULL) {
        printf("Error: Could not open playlist.txt. Make sure the file exists!\n");
        return 1;
    }

    char originalSong[100];
    char lowercasedSong[100];
    int found = 0;

    printf("--- Songs containing 'love' ---\n");

    // Read the file line by line
    while (fgets(originalSong, sizeof(originalSong), file) != NULL) {
        
        // Copy the original song name to convert it to lowercase for filtering
        strcpy(lowercasedSong, originalSong);
        toLowerCase(lowercasedSong);

        // Check if "love" exists in the lowercased version of the string
        if (strstr(lowercasedSong, "love") != NULL) {
            // Print the original song name to maintain proper capitalization
            printf("- %s", originalSong);
            found = 1;
        }
    }

    if (!found) {
        printf("No songs matching 'love' were found in your playlist.\n");
    }

    // Close the file connection
    fclose(file);

    return 0;
}