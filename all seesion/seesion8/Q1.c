//Q8.1 Declare a function called getUserInitials that takes a user's full name (like 'Virat Kohli') and returns their initials in uppercase (e.g., 'VK'). Call this function with your favorite cricketer's name and print the result.


#include <stdio.h>
#include <ctype.h>

void getUserInitials(char fullName[]) {
    char first = toupper(fullName[0]);
    char second = '\0';

    for (int i = 0; fullName[i] != '\0'; i++) {
        if (fullName[i] == ' ' && fullName[i + 1] != '\0') {
            second = toupper(fullName[i + 1]);
            break;
        }
    }

    printf("Initials: %c%c\n", first, second);
}

int main() {

    char name[] = "Virat Kohli";

    getUserInitials(name);

    return 0;
}