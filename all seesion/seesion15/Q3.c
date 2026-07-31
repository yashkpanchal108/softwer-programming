/*3.Implement file handling in your Music Listening Logger so that when the user logs their daily
 listening minutes, the data is saved to a file named music_log.txt for persistence.*/

 #include <stdio.h>

int main() {
    int minutes[7] = {0}; // Stores minutes for 7 days
    int choice;
    int total;
    FILE *file; // Pointer for file handling

    do {
        // Display Menu
        printf("\n--- Music Listening Logger ---\n");
        printf("1. Log listening minutes for 7 days (Saves to File)\n");
        printf("2. View weekly summary\n");
        printf("3. Exit\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\n--- Enter Listening Minutes ---\n");
                
                // Open file in write mode ("w")
                file = fopen("music_log.txt", "w");

                if (file == NULL) {
                    printf("Error opening file!\n");
                    break;
                }

                // Input minutes for each day and write to file
                for (int i = 0; i < 7; i++) {
                    printf("Enter minutes for Day %d: ", i + 1);
                    scanf("%d", &minutes[i]);
                    
                    // Save to the file
                    fprintf(file, "Day %d: %d minutes\n", i + 1, minutes[i]);
                }

                // Close the file after saving
                fclose(file);
                printf("\nData successfully recorded and saved to 'music_log.txt'!\n");
                break;

            case 2:
                // Display weekly summary from memory
                total = 0;
                printf("\n--- Weekly Summary ---\n");
                for (int i = 0; i < 7; i++) {
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

    } while (choice != 3);

    return 0;
}