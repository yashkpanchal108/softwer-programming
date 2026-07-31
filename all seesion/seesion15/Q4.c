/*4.Add a feature to your app that reads the saved music_log.txt file and generates a weekly 
report showing the total, average, and highest listening minutes in the week.*/

#include <stdio.h>

int main() {
    int minutes[7] = {0}; // Stores minutes for 7 days
    int choice;
    FILE *file; // Pointer for file handling

    do {
        // Display Menu
        printf("\n--- Music Listening Logger ---\n");
        printf("1. Log listening minutes for 7 days (Saves to File)\n");
        printf("2. View stored minutes in memory\n");
        printf("3. Generate Weekly Report from file (Total, Average, Max)\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
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
                    
                    // Save to the file (format: Day X: Y minutes)
                    fprintf(file, "Day %d: %d minutes\n", i + 1, minutes[i]);
                }

                fclose(file);
                printf("\nData saved to 'music_log.txt' successfully!\n");
                break;

            case 2:
                // View from current memory
                printf("\n--- Current Memory Data ---\n");
                for (int i = 0; i < 7; i++) {
                    printf("Day %d: %d minutes\n", i + 1, minutes[i]);
                }
                break;

            case 3: {
                // Read from file and calculate stats
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

                // Read line-by-line matching format "Day %d: %d minutes"
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
                    printf("\nFile was empty or in an incorrect format.\n");
                }
                break;
            }

            case 4:
                printf("\nExiting the app. Goodbye!\n");
                break;

            default:
                printf("\nInvalid choice! Please enter a number between 1 and 4.\n");
        }

    } while (choice != 4);

    return 0;
}