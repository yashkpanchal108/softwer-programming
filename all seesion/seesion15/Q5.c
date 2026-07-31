/*5.Refactor your Music Listening Logger to allow users to reset their weekly data by clearing
 the array and deleting the contents of music_log.txt.<br><br><em><strong>Constraint:</strong> 
 Make sure the reset option is available in the menu and asks for confirmation before deleting
 data.</em>*/

 #include <stdio.h>

int main() {
    int minutes[7] = {0}; // Stores minutes for 7 days
    int choice;
    FILE *file;

    do {
        // Display Menu
        printf("\n--- Music Listening Logger ---\n");
        printf("1. Log listening minutes for 7 days (Saves to File)\n");
        printf("2. View stored minutes in memory\n");
        printf("3. Generate Weekly Report from file (Total, Average, Max)\n");
        printf("4. Reset weekly data (Clear memory and file)\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\n--- Enter Listening Minutes ---\n");
                
                // Open file in write mode ("w")
                file = fopen("music_log.txt", "w");

                if (file == NULL) {
                    printf("Error creating/opening file!\n");
                    break;
                }

                // Input minutes and write to file
                for (int i = 0; i < 7; i++) {
                    printf("Enter minutes for Day %d: ", i + 1);
                    scanf("%d", &minutes[i]);
                    
                    // Save to file
                    fprintf(file, "Day %d: %d minutes\n", i + 1, minutes[i]);
                }

                fclose(file);
                printf("\nData saved to 'music_log.txt' successfully!\n");
                break;

            case 2:
                // View memory data
                printf("\n--- Current Memory Data ---\n");
                for (int i = 0; i < 7; i++) {
                    printf("Day %d: %d minutes\n", i + 1, minutes[i]);
                }
                break;

            case 3: {
                // Generate report from file
                file = fopen("music_log.txt", "r");

                if (file == NULL) {
                    printf("\nNo log file found! Please log minutes first (Option 1).\n");
                    break;
                }

                int dayNum, readMins;
                int total = 0;
                int highest = 0;
                int count = 0;

                printf("\n--- Reading Data from 'music_log.txt' ---\n");

                while (fscanf(file, "Day %d: %d minutes\n", &dayNum, &readMins) == 2) {
                    printf("Day %d: %d minutes\n", dayNum, readMins);
                    
                    total += readMins;
                    
                    if (readMins > highest) {
                        highest = readMins;
                    }
                    
                    count++;
                }

                fclose(file);

                if (count > 0) {
                    float average = (float)total / count;

                    printf("\n==================================\n");
                    printf("       WEEKLY REPORT SUMMARY      \n");
                    printf("==================================\n");
                    printf(" Total Time Listened : %d minutes\n", total);
                    printf(" Average per Day     : %.2f minutes\n", average);
                    printf(" Highest Single Day  : %d minutes\n", highest);
                    printf("==================================\n");
                } else {
                    printf("\nFile is empty or contains no valid data.\n");
                }
                break;
            }

            case 4: {
                char confirm;
                printf("\nAre you sure you want to reset all data? (y/n): ");
                scanf(" %c", &confirm); // Space before %c handles leftover newline characters

                if (confirm == 'y' || confirm == 'Y') {
                    // 1. Reset array elements to 0
                    for (int i = 0; i < 7; i++) {
                        minutes[i] = 0;
                    }

                    // 2. Clear contents of music_log.txt by opening in "w" mode and closing immediately
                    file = fopen("music_log.txt", "w");
                    if (file != NULL) {
                        fclose(file);
                    }

                    printf("\nAll weekly data and log file contents have been reset successfully!\n");
                } else {
                    printf("\nReset operation cancelled.\n");
                }
                break;
            }

            case 5:
                printf("\nExiting the app. Goodbye!\n");
                break;

            default:
                printf("\nInvalid choice! Please enter a number between 1 and 5.\n");
        }

    } while (choice != 5);

    return 0;
}