// Q2.Rewrite the following code to improve its indentation and add comments explaining each step, so that a beginner can understand what it does:<br><br>function isEven(num){if(num%2==0){return true;}else{return false;}}

#include <stdio.h>
#include <stdbool.h> // Required in C to use 'bool', 'true', and 'false'

// This function checks if a given number is even or odd.
// It takes one integer parameter 'num' and returns a boolean value.
bool isEven(int num) {
    
    // The '%' (modulo) operator calculates the remainder of a division.
    // If a number divided by 2 has a remainder of 0, it means it is an even number.
    if (num % 2 == 0) {
        // If the condition is true, return true (the number is even)
        return true; 
    } 
    // If the remainder is anything else (like 1), the number is odd
    else {
        // Return false (the number is not even)
        return false;
    }
}

int main() {
    // Example usage:
    int testNumber = 4;
    
    if (isEven(testNumber)) {
        printf("%d is even.\n", testNumber);
    } else {
        printf("%d is odd.\n", testNumber);
    }
    
    return 0;
}
