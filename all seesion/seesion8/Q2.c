//Q2.Create a function addToCart that takes a shopping cart array and a product name, adds the product to the cart, and prints the updated cart. Demonstrate how passing the cart array by reference allows changes to persist outside the function.<br><br><em><strong>Hint:</strong> In languages like JavaScript, arrays are passed by reference. In C/C++, use pointers for reference behavior.</em>

#include <stdio.h>
#include <string.h>


void addToCart(char cart[][20], int *count, char product[]) {
    strcpy(cart[*count], product);   // Add new product
    (*count)++;                      // Increase cart size

    printf("\nUpdated Cart Inside Function:\n");
    for (int i = 0; i < *count; i++) {
        printf("%s\n", cart[i]);
    }
}

int main() {
    
    char cart[10][20] = {"Laptop", "Mouse"};
    int count = 2;

    printf("Cart Before Adding Product:\n");
    for (int i = 0; i < count; i++) {
        printf("%s\n", cart[i]);
    }

   
    addToCart(cart, &count, "Keyboard");

    printf("\nCart After Function Call:\n");
    for (int i = 0; i < count; i++) {
        printf("%s\n", cart[i]);
    }

    return 0;
}