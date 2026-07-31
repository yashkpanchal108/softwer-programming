// Q2.Write a function swapPlaylistCounts(int *a, int *b) that swaps the number of songs in two Spotify playlists using pointers, then call the function in main and print the swapped values.

#include <stdio.h>

// Function to swap the song counts using pointers
void swapPlaylistCounts(int *a, int *b) {
    int temp = *a; // Store the value pointed to by a in a temporary variable
    *a = *b;       // Assign the value pointed to by b to the address held by a
    *b = temp;     // Assign the temporary value to the address held by b
}

int main() {
    // Initialize the song counts for two Spotify playlists
    int playlist1 = 45;
    int playlist2 = 82;

    printf("--- Before Swapping ---\n");
    printf("Playlist 1 song count: %d\n", playlist1);
    printf("Playlist 2 song count: %d\n", playlist2);

    // Call the function by passing the addresses of the variables
    swapPlaylistCounts(&playlist1, &playlist2);

    printf("\n--- After Swapping ---\n");
    printf("Playlist 1 song count: %d\n", playlist1);
    printf("Playlist 2 song count: %d\n", playlist2);

    return 0;
}