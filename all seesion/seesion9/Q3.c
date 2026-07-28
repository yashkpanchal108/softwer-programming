//Q3 Build a function that takes a 1D array of 7 integers representing your daily Zomato order amounts and calculates the average spend for the week.<br><br><em><strong>Hint:</strong> Use a loop to sum the values, then divide by the array length.</em>


#include <stdio.h>

float calculateAverage(int orders[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += orders[i];
    }

    return (float)sum / size;
}

int main() {
    // Daily Zomato order amounts for 7 days
    int dailyOrders[7] = {250, 300, 150, 400, 350, 200, 450};

    float average = calculateAverage(dailyOrders, 7);

    printf("Average spend for the week: %.2f\n", average);

    return 0;
}
