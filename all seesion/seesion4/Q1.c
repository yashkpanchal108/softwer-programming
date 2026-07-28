//Q4.1 Create a simple JavaScript function called calculateTotal that takes two numbers: itemPrice and quantity, and returns the total bill amount using arithmetic operators.


#include <stdio.h>

float calculateTotal(float itemPrice, int quantity)
{
    return itemPrice * quantity;
}

int main()
{
    float itemPrice, total;
    int quantity;

    printf("Enter item price: ");
    scanf("%f", &itemPrice);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    total = calculateTotal(itemPrice, quantity);

    printf("Total Bill Amount = %.2f\n", total);

    return 0;
}