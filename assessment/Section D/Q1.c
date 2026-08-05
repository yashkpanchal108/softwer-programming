// Use an AI tool of your choice (ChatGPT, Claude, GitHub Copilot, etc.) to help you write a C program
// that:
// Accepts exactly 10 integers from the user using a loop and stores them in an array.
// Finds and displays the maximum value, minimum value, and arithmetic mean (displayed as a
// float with 2 decimal places).
// Sorts the array in ascending order using any sorting method and displays the sorted list.
// Prints whether the mean is closer to the minimum, closer to the maximum, or exactly midway
// between them.

// Then, working without AI, test the code using boundary inputs: (a) all 10 values identical, (b) a
// mix of positive and negative integers, and (c) a list where the mean falls exactly between min
// and max. Find at least one bug, edge-case failure, or improvement in the AI's solution and fix it
// yourself.

#include <stdio.h>
#include <math.h>

#define SIZE 10

void clearInputBuffer(void) 
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(void) 
{
    int arr[SIZE];
    long long sum = 0; // Fixed: Uses long long to prevent integer overflow
    int max, min;
    float mean;
    int i,j;

    printf("Enter %d integers:\n", SIZE);
    for ( i = 0; i < SIZE; i++)
	{
        printf("Element %d: ", i + 1);
        while (scanf("%d", &arr[i]) != 1) 
		{ // Fixed: Input validation for non-integers
            printf("Invalid input! Please enter a valid integer: ");
            clearInputBuffer();
        }
    }

    max = arr[0];
    min = arr[0];
    sum = arr[0];

    for ( i = 1; i < SIZE; i++) 
	{
        if (arr[i] > max) 
		{
            max = arr[i];
        }
        if (arr[i] < min)
		{
            min = arr[i];
        }
        sum += arr[i];
    }

    mean = (float)sum / SIZE;

    // Bubble sort ascending
    for ( i = 0; i < SIZE - 1; i++) 
	{
        for ( j = 0; j < SIZE - i - 1; j++) 
		{
            if (arr[j] > arr[j + 1]) 
			{
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\n--- RESULTS ---\n");
    printf("Maximum Value  : %d\n", max);
    printf("Minimum Value  : %d\n", min);
    printf("Arithmetic Mean: %.2f\n", mean);

    printf("\nSorted Array (Ascending): ");
    for ( i = 0; i < SIZE; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Fixed: Handles identical input edge-case explicitly
    if (min == max) 
	{
        printf("Mean Position  : All input values are identical (min = max = mean).\n");
    } else {
        float distToMin = fabs(mean - min);
        float distToMax = fabs(max - mean);

        printf("Mean Position  : ");
        if (fabs(distToMin - distToMax) < 0.0001f) 
		{
            printf("The mean is exactly midway between the minimum and maximum.\n");
        } else if (distToMin < distToMax) 
		{
            printf("The mean is closer to the minimum value.\n");
        } else 
		{
            printf("The mean is closer to the maximum value.\n");
        }
    }

    return 0;
}