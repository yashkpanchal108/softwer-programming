//Q1 Declare a 1D array called dailySteps with 7 elements to store your step count for each day of the week, assign sample values, and print each value using a loop.


#include <stdio.h>

int main() {
   
    int dailySteps[7] = {5000, 6500, 7000, 8000, 7500, 9000, 10000};

    printf("Daily Step Counts:\n");

    for (int i = 0; i < 7; i++) {
        printf("Day %d: %d steps\n", i + 1, dailySteps[i]);
    }

    return 0;
}
