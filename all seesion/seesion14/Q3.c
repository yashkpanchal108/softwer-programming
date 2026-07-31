// Q3.Write a function formatFollowersCount(count) that takes a number and returns a formatted string like Instagram: 1500 as '1.5K', 1200000 as '1.2M', and numbers below 1000 as-is. Add clear comments and use proper indentation.

#include <stdio.h>

// Function to format follower counts like Instagram
// Parameters:
//   - count: The number of followers (long long to handle very large values)
//   - result: The destination character array where the formatted string will be stored
void formatFollowersCount(long long count, char *result) {
    
    // Case 1: Numbers 1,000,000 (1M) and above
    if (count >= 1000000) {
        // If it divides perfectly into millions, don't show trailing decimals (e.g., 2.0M -> 2M)
        if (count % 1000000 == 0) {
            sprintf(result, "%lldM", count / 1000000);
        } else {
            // Otherwise, display with 1 decimal place
            sprintf(result, "%.1fM", (double)count / 1000000.0);
        }
    }
    // Case 2: Numbers between 1,000 (1K) and 999,999
    else if (count >= 1000) {
        // If it divides perfectly into thousands, don't show trailing decimals (e.g., 5.0K -> 5K)
        if (count % 1000 == 0) {
            sprintf(result, "%lldK", count / 1000);
        } else {
            // Otherwise, display with 1 decimal place
            sprintf(result, "%.1fK", (double)count / 1000.0);
        }
    }
    // Case 3: Numbers below 1,000 are displayed exactly as they are
    else {
        sprintf(result, "%lld", count);
    }
}

int main() {
    // Buffer string to store the final formatted output text
    char formattedText[50];

    // Test Case 1: Under 1000
    formatFollowersCount(735, formattedText);
    printf("Followers: %s\n", formattedText); // Output: 735

    // Test Case 2: In thousands (K)
    formatFollowersCount(1500, formattedText);
    printf("Followers: %s\n", formattedText); // Output: 1.5K

    // Test Case 3: In millions (M)
    formatFollowersCount(1200000, formattedText);
    printf("Followers: %s\n", formattedText); // Output: 1.2M

    // Test Case 4: Perfect clean division
    formatFollowersCount(5000, formattedText);
    printf("Followers: %s\n", formattedText); // Output: 5K

    return 0;
}