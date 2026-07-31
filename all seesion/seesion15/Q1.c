
/*1.Create a console-based app called Music Listening Logger that allows users to enter the 
number of minutes they listened to music each day for a week and stores this data in an array.*/

#include <stdio.h>

int main() {
    // Array to store minutes listened for 7 days
    int minutes[7];
    int total = 0,i;

    printf("--- Music Listening Logger ---\n\n");

    // Input loop to get minutes for each day
    for ( i = 0; i < 7; i++) {
        printf("Enter minutes listened for Day %d: ", i + 1);
        scanf("%d", &minutes[i]);
        
        // Add daily minutes to total
        total += minutes[i];
    }

    // Display summary
    printf("\n--- Weekly Summary ---\n");
    for ( i = 0; i < 7; i++) {
        printf("Day %d: %d minutes\n", i + 1, minutes[i]);
    }

    printf("\nTotal time listened this week: %d minutes\n", total);

    return 0;
}