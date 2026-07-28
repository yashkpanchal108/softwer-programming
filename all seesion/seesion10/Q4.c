//Q4 Build a small script that takes the user's full name as input and creates a username by copying only the first 5 characters using strcpy(). Print the generated username.<br><br><em><strong>Constraint:</strong> If the name is shorter than 5 characters, use the full name as the username.</em>


#include <stdio.h>
#include <string.h>

int main() {
    char fullName[100];
    char username[100];
    char temp[6];

    printf("Enter your full name: ");
    fgets(fullName, sizeof(fullName), stdin);

    // Remove newline character added by fgets()
    fullName[strcspn(fullName, "\n")] = '\0';

    if (strlen(fullName) < 5) {
        strcpy(username, fullName);
    } else {
        strncpy(temp, fullName, 5);
        temp[5] = '\0';
        strcpy(username, temp);
    }

    printf("Generated username: %s\n", username);

    return 0;
}
