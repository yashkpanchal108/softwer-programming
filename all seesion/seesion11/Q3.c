// Q3.Given an array of 5 order amounts (e.g., Zomato orders), use a pointer to iterate through the array and print each amount along with its memory address.<br><br><em><strong>Hint:</strong> Use pointer arithmetic to move to the next element.</em>

#include <stdio.h>

int main() {
    // 1. Initialize an array of 5 order amounts (using float for currency)
    float orders[5] = {249.50, 580.00, 120.25, 899.90, 450.00};
    
    // 2. Declare a pointer pointing to the first element of the array
    float *ptr = orders; // Equivalent to: float *ptr = &orders[0];
    
    printf("--- Zomato Order Details ---\n\n");
    
    // 3. Iterate through the array using pointer arithmetic
    for (int i = 0; i < 5; i++) {
        // *(ptr + i) accesses the value at the current index
        // (ptr + i) gives the exact memory address of that index
        printf("Order %d: Amount = %.2f | Memory Address = %p\n", i + 1, *(ptr + i), (void*)(ptr + i));
    }
    
    return 0;
}
