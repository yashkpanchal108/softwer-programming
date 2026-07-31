/*2.Add a menu-driven interface to your Music Listening Logger so users can choose to log new 
listening minutes, view their weekly summary, or exit the app.<br><br><em><strong>Hint:</strong> 
Use a loop to repeatedly show the menu until the user selects exit.</em>*/

#include <stdio.h>

int main() {
    int minutes[7] = {0}; // Stores minutes for 7 days (initialized to 0)
    int choice;
    int total,i;

    do {
        // Display Menu
        printf("\n--- Music Listening Logger ---\n");
        printf("1. Log listening minutes for 7 days\n");
        printf("2. View weekly summary\n");
        printf("3. Exit\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Log minutes for each day
                printf("\n--- Enter Listening Minutes ---\n");
                for ( i = 0; i < 7; i++) {
                    printf("Enter minutes for Day %d: ", i + 1);
                    scanf("%d", &minutes[i]);
                }
                printf("Data recorded successfully!\n");
                break;

            case 2:
                // Display weekly summary
                total = 0;
                printf("\n--- Weekly Summary ---\n");
                for ( i = 0; i < 7; i++) {
                    printf("Day %d: %d minutes\n", i + 1, minutes[i]);
                    total += minutes[i];
                }
                printf("Total time listened: %d minutes\n", total);
                break;

            case 3:
                printf("\nExiting the app. Goodbye!\n");
                break;

            default:
                printf("\nInvalid choice! Please enter 1, 2, or 3.\n");
        }

    } while (choice != 3); // Loop continues until user chooses 3

    return 0;
}