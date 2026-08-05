// Build a program that records a student's daily study hours for 7 days, stores them in an array,
// and generates a performance summary.
// Use a for loop to accept 7 float values (one per day) and store them in a float array.
// Calculate and print the weekly total, daily average, and the day number with the highest study
// hours.
// Print a simple visual bar for each day: the day number followed by one asterisk (*) per hour
// studied, truncated to the nearest integer (e.g., Day 3: ***).
// Reject and re-prompt for any day entry that is negative or greater than 24, before storing it in
// the array.


#include <stdio.h>

void main() {
    float hours[7];
    float total = 0.0, average;
    int i,j,max_day = 0;

    for ( i = 0; i < 7; i++) {
        do {
            printf("Enter study hours for Day %d (0-24): ", i + 1);
            scanf("%f", &hours[i]);

            if (hours[i] < 0 || hours[i] > 24) {
                printf("Invalid input! Hours must be between 0 and 24. Try again.\n");
            }
        } while (hours[i] < 0 || hours[i] > 24);

        total += hours[i];

        if (hours[i] > hours[max_day]) {
            max_day = i;
        }
    }

    average = total / 7.0;

    printf("\n=== PERFORMANCE SUMMARY ===\n\n");
    printf("Total Study Hours: %.2f hours\n", total);
    printf("Daily Average: %.2f hours\n", average);
    printf("Most Studied Day: Day %d (%.2f hours)\n", max_day + 1, hours[max_day]);
    
    printf("\n=== DAILY STUDY CHART ===\n\n");
    for ( i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        
        int num_stars = (int)hours[i]; 
        for ( j = 0; j < num_stars; j++) {
            printf("*");
        }
        printf("\n");
    }

}