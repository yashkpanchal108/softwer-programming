//Q6.4 Explain with your own example the difference between entry-controlled and exit-controlled loops by writing a short code snippet for each (for/while vs do-while) and describing what happens if the loop condition is false at the start.

#include <stdio.h>

int main() {
    int num = 5;

    while (num < 5) {
        printf("Number = %d\n", num);
        num++;
    }

    printf("Loop Finished");

    do
    {
        printf("%d\n",num);
        num++;
    } while(num < 5);
        printf("Loop Finished");

} 
