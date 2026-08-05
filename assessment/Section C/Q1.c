// Mini Project: Student Productivity Tracker
// Objective:
// Build a console-based Student Productivity Tracker that logs daily study hours across subjects
// for a full week, combining arrays, structures, functions, and file handling from Module 3 into a
// single working program.
// Your project must:
// The program must be menu-driven with at least 3 options: (1) Log Today's Study Hours, (2)
// View Weekly Report, (3) Save & Exit.
// Define a struct StudyLog { char subject[40]; float hours[7]; } and create an array of at least 3
// subject records.
// Write a function that calculates and displays the weekly total hours and daily average for
// each subject.
// Display a simple text-based progress chart: for each subject, print one filled dot (•) per hour
// studied that day (truncate to nearest integer).
// On exit, save all records to a file named productivity_log.txt using fprintf(), with each subject's
// name and 7 daily values written as a single comma-separated line.





#include <stdio.h>

struct StudyLog
{
    char subject[40];
    float hours[7];
};

void calculate(struct StudyLog s[], int n)
{
    int i, j;
    float total, avg;

    for(i = 0; i < n; i++)
    {
        total = 0;

        for(j = 0; j < 7; j++)
        {
            total += s[i].hours[j];
        }

        avg = total / 7;

        printf("\nSubject : %s", s[i].subject);
        printf("\nTotal Hours : %.2f", total);
        printf("\nDaily Average : %.2f\n", avg);

        printf("Progress Chart:\n");

        for(j = 0; j < 7; j++)
        {
            printf("Day %d : ", j + 1);

            int k;
            for(k = 0; k < (int)s[i].hours[j]; k++)
            {
                printf(".");
            }

            printf("\n");
        }
    }
}

void saveFile(struct StudyLog s[], int n)
{
    FILE *fp;
    int i, j;

    fp = fopen("productivity_log.txt", "w");

    if(fp == NULL)
    {
        printf("File cannot be created.\n");
        return;
    }

    for(i = 0; i < n; i++)
    {
        fprintf(fp, "%s", s[i].subject);

        for(j = 0; j < 7; j++)
        {
            fprintf(fp, ",%.2f", s[i].hours[j]);
        }

        fprintf(fp, "\n");
    }

    fclose(fp);

    printf("\nRecords saved successfully!\n");
}

int main()
{
    struct StudyLog s[3];
    int choice, i, j;

    while(1)
    {
        printf("\n Student Productivity Tracker \n");
        printf("1. Log Today's Study Hours\n");
        printf("2. View Weekly Report\n");
        printf("3. Save & Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            for(i = 0; i < 3; i++)
            {
                printf("\nEnter Subject %d Name: ", i + 1);
                scanf("%s", s[i].subject);

                for(j = 0; j < 7; j++)
                {
                    printf("Day %d Hours: ", j + 1);
                    scanf("%f", &s[i].hours[j]);
                }
            }
        }
        else if(choice == 2)
        {
            calculate(s, 3);
        }
        else if(choice == 3)
        {
            saveFile(s, 3);
            printf("Thank You!\n");
            break;
        }
        else
        {
            printf("Invalid Choice!\n");
        }
    }

}