//Q2 Take input for two usernames (as strings) and compare them using strcmp(). Display whether they are the same or different.


#include <stdio.h>
#include <string.h>

int main() {
    char username1[50], username2[50];

    printf("Enter first username: ");
    scanf("%49s", username1);

    printf("Enter second username: ");
    scanf("%49s", username2);

    if (strcmp(username1, username2) == 0) {
        printf("The usernames are the same.\n");
    } else {
        printf("The usernames are different.\n");
    }

    return 0;
}

