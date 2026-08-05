// Build a console program that accepts a student's percentage score and prints their letter
// grade along with a short motivational message.
// Accept a float percentage value as user input using scanf().
// Assign a grade using if-else if: A (>= 90), B (>= 75), C (>= 60), D (>= 45), F (below 45).
// Print the assigned grade and a one-line message for each band (e.g., 'B — Good work! Keep
// pushing.').
// Handle invalid input: if the score is outside the range 0–100, print a clear error message and
// exit the program gracefully. 



#include <stdio.h>

void main() 
{
    float per;

    printf("Enter Student Percentage = ");
    
    if (scanf("%f", &per) != 1) 
    {
        printf("Error: Invalid numerical input.\n");
        return 1;
    }

    if (per < 0 || per > 100)
    {
        printf("Error: Score must be between 0 and 100.\n");
        return 1; 
    }

    if (per >= 90)
    {
        printf("A Grade \n");
    }
    else if (per >= 75)
    {
        printf("B Grade \n");
    }
    else if (per >= 60)
    {
        printf("C Grade \n");
    }
    else if (per >= 45)
    {
        printf("D Grade \n");
    }
    else
    {
        printf("F Grade \n");
    }

}