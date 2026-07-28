//Q5.3 Create a Flipkart discount calculator that asks the user for the total cart amount. Use nested if statements to check: if amount > 2000, apply 20% discount; else if amount > 1000, apply 10% discount; else, no discount. Print the final amount to pay.<br><br><em><strong>Hint:</strong> Use nested ifs to check each discount slab.</em>

#include <stdio.h>

int main() {
    float amount, finalAmount;

    printf(" Flipkart Discount Calculator \n");
    printf("Enter total cart amount: ");
    scanf("%f", &amount);

    finalAmount = amount;

    if (amount > 1000) {
        if (amount > 2000) {
            finalAmount = amount - (amount * 20 / 100);
            printf("Discount Applied: 20%%\n");
        } else {
            finalAmount = amount - (amount * 10 / 100);
            printf("Discount Applied: 10%%\n");
        }
    } else {
        printf("No Discount Applied.\n");
    }

    printf("Final Amount to Pay: ₹%.2f\n", finalAmount);

    return 0;
}