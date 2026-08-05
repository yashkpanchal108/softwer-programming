// Build a menu-driven C program that lets a user log and view personal daily expenses, and
// saves all records to a text file on exit.
// Define a struct Expense with fields: category (char[30]) and amount (float). Allocate an array
// to store up to 10 Expense entries.
// Present a menu with 3 options: (1) Add Expense, (2) View All Expenses, (3) Save & Exit. Loop until
// the user selects option 3.
// In the View option, display all logged expenses in a formatted list and print the running total at
// the bottom.
// On exit (option 3), write all expense records to a file named expenses.txt using fprintf(), with
// one record per line in the format: category,amount.


#include <stdio.h>

struct Expense
{
    char category[30];
    float amount;
};

void  main()
{
    struct Expense e[10];
    int choice, count=0, i;
    float total=0;

    while(1)
    {
        printf("\n1. Add Expense");
        printf("\n2. View Expenses");
        printf("\n3. Save & Exit");

        printf("\nEnter Choice: ");
        scanf("%d",&choice);

        if(choice==1)
        {
            if(count<10)
            {
                printf("Category: ");
                scanf("%s",e[count].category);

                printf("Amount: ");
                scanf("%f",&e[count].amount);

                count++;
            }
        }
        else if(choice==2)
        {
            total=0;

            printf("\nCategory\tAmount\n");

            for(i=0;i<count;i++)
            {
                printf("%s\t\t%.2f\n",
                e[i].category,e[i].amount);

                total+=e[i].amount;
            }

            printf("Total = %.2f\n",total);
        }
        else if(choice==3)
        {
            FILE *fp;

            fp=fopen("expenses.txt","w");

            for(i=0;i<count;i++)
            {
                fprintf(fp,"%s,%.2f\n",
                e[i].category,e[i].amount);
            }

            fclose(fp);

            printf("Saved Successfully!");

            break;
        }
        else
        {
            printf("Invalid Choice");
        }
    }
}