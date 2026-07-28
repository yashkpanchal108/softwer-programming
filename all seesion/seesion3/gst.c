//Q3.2  Create a constant variable to store the GST rate (for example, 18%) and use it to calculate the final price of a Zomato order with a given base price.<br><br><em><strong>Constraint:</strong> The GST rate must not be changeable after its initial assignment.</em>


#include <stdio.h>

int main() {
    // Constant GST rate (cannot be changed)
    const float GST_RATE = 18.0;

    // Base price of the Zomato order
    float basePrice = 500.0;

    // Calculate GST amount
    float gstAmount = (basePrice * GST_RATE) / 100;

    // Calculate final price
    float finalPrice = basePrice + gstAmount;

    // Display the results
    printf("Base Price: Rs. %.2f\n", basePrice);
    printf("GST Rate: %.2f%%\n", GST_RATE);
    printf("GST Amount: Rs. %.2f\n", gstAmount);
    printf("Final Price: Rs. %.2f\n", finalPrice);

    return 0;
}