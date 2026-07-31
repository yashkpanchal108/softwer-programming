
// Q1.Given the following buggy code meant to calculate the total price of a Zomato order, identify and fix the syntax and runtime errors:<br><br>let items = ["Burger", "Pizza", "Fries"];<br>let prices = [120, 250, 90];<br>let total = 0;<br>for (i = 0; i < items.length; i++) {<br> total =+ prices[i]<br>}<br>console.log("Total price is: " + total);<br><br><em><strong>Hint:</strong> Watch for assignment and loop variable issues.</em>

#include <stdio.h>

int main() {
    // Array of menu items (array of string literals)
    char *items[] = {"Burger", "Pizza", "Fries"};
    
    // Array of prices corresponding to the items
    int prices[] = {120, 250, 90};
    
    // Calculate the total number of elements in the array
    int length = sizeof(prices) / sizeof(prices[0]);
    
    int total = 0;

    // Fixed: Declared 'i' as an integer and corrected '=+' to '+='
    for (int i = 0; i < length; i++) {
        total += prices[i];
    }

    // Print the final accumulated total
    printf("Total price is: %d\n", total);

    return 0;
}