//Q4. Build a function formatPrice that takes a price in rupees and returns a string formatted like Flipkart's price tag (e.g., '₹1,599'). Use this function to display prices for three different products.

#include <stdio.h>


char* formatPrice(int price)
{
    static char formattedPrice[20];

    if (price >= 1000)
    {
        sprintf(formattedPrice, "₹%d,%03d", price / 1000, price % 1000);
    }
    else
    {
        sprintf(formattedPrice, "₹%d", price);
    }

    return formattedPrice;
}

int main()
{
    int product1 = 1599;
    int product2 = 24999;
    int product3 = 799;

    printf("Product 1 Price: %s\n", formatPrice(product1));
    printf("Product 2 Price: %s\n", formatPrice(product2));
    printf("Product 3 Price: %s\n", formatPrice(product3));

    return 0;
}