//Q6.2 Create a menu-driven console app that lets the user: 1) View your favorite 3 IPL teams, 2) Add a new team, 3) Exit. Use a while loop to keep showing the menu until the user chooses Exit.<br><br><em><strong>Hint:</strong> Use input() (or Scanner in Java) to get the user's choice each time.</em>


#include <stdio.h>

int main() {
    char teams[4][50] = {
        "Mumbai Indians",
        "Chennai Super Kings",
        "Royal Challengers Bengaluru"
    };

    int choice;
    int count = 3;

    while (1) {
        printf("\nIPL Teams Menu\n");
        printf("1. View Favorite 3 IPL Teams\n");
        printf("2. Add a New Team\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nFavorite IPL Teams:\n");
                for (int i = 0; i < count; i++) {
                    printf("%d. %s\n", i + 1, teams[i]);
                }
                break;

            case 2:
                if (count < 4) {
                    printf("Enter new team name: ");
                    scanf(" %[^\n]", teams[count]);
                    count++;
                    printf("Team added successfully!\n");
                } else {
                    printf("Only one new team can be added.\n");
                }
                break;

            case 3:
                printf("Thank you! Exiting the program...\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}