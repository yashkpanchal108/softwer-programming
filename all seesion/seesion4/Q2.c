//Q4.2 Build a Flipkart-style discount calculator: given product price, discount percentage, and a boolean isMember, use arithmetic and logical operators to calculate the final price (apply an extra 5% off if isMember is true).


#include <stdio.h>

int main()
{
    float price, discount, finalPrice;
    int isMember;   // 1 = Yes, 0 = No

    printf("Enter Product Price: ");
    scanf("%f", &price);

    printf("Enter Discount Percentage: ");
    scanf("%f", &discount);

    printf("Are you a Member? (1 = Yes, 0 = No): ");
    scanf("%d", &isMember);

    // Apply extra 5% discount for members
    if (isMember == 1)
    {
        discount = discount + 5;
    }

    // Calculate final price
    finalPrice = price - (price * discount / 100);

    // Output
    printf("\nOriginal Price: %.2f\n", price);
    printf("Total Discount: %.2f%%\n", discount);
    printf("Final Price: %.2f\n", finalPrice);

    return 0;
}