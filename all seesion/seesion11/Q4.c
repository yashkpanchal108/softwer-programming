// Q4.Create a function incrementFollowers(int *followers, int n) that increases each follower count in an array (representing Instagram followers for 5 friends) by 100 using pointer arithmetic, then print the updated counts.

#include <stdio.h>

// Function to increase each follower count by 100 using pointer arithmetic
void incrementFollowers(int *followers, int n) {
    for (int i = 0; i < n; i++) {
        // *(followers + i) targets the value at the current index
        *(followers + i) += 100; 
    }
}

int main() {
    // Initialize an array representing Instagram followers for 5 friends
    int instagramFollowers[5] = {250, 480, 1200, 75, 310};
    int n = 5;

    printf("--- Original Follower Counts ---\n");
    for (int i = 0; i < n; i++) {
        printf("Friend %d: %d followers\n", i + 1, instagramFollowers[i]);
    }

    // Call the function passing the array (decays to a pointer) and its size
    incrementFollowers(instagramFollowers, n);

    printf("\n--- Updated Follower Counts (After +100) ---\n");
    for (int i = 0; i < n; i++) {
        printf("Friend %d: %d followers\n", i + 1, instagramFollowers[i]);
    }

    return 0;
}
