//Q3.1 Declare variables for a Flipkart product: productName (as a string), price (float), and rating (double). Assign sample values and print each variable with its data type.


#include <stdio.h>

int main()
{
    // Declaring variables
    char productName[] = "samsung galaxy s23";   // String
    float price = 59999.99f;                       // Float
    double rating = 4.7;                         // Double

    // Printing variables with their data types
    printf("Product Name(string): %s\n", productName);

    printf("Price(flot): %.2f\n", price);

    printf("Rating(double): %.1lf\n", rating);

    return 0;
}