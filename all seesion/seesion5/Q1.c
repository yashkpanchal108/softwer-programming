//Q5.1 Create a simple IPL Fan Bot that takes your favorite IPL team name as input and uses if-else-if statements to print a unique cheer message for each team (e.g., 'Go Mumbai Indians!', 'Chennai Super Kings for the win!'). If the team is not recognized, print 'Team not found!'

#include <stdio.h>
#include <string.h>

int main()
{
    char team[50];

    printf("Enter your favorite IPL team: ");
    fgets(team, sizeof(team), stdin);

    // Remove newline character
    team[strcspn(team, "\n")] = '\0';

    if (strcmp(team, "Mumbai Indians") == 0)
    {
        printf("Go Mumbai Indians!\n");
    }
    else if (strcmp(team, "Chennai Super Kings") == 0)
    {
        printf("Chennai Super Kings for the win!\n");
    }
    else if (strcmp(team, "Royal Challengers Bangalore") == 0)
    {
        printf("Ee Sala Cup Namde!\n");
    }
    else if (strcmp(team, "Kolkata Knight Riders") == 0)
    {
        printf("Korbo Lorbo Jeetbo Re!\n");
    }
    else if (strcmp(team, "Rajasthan Royals") == 0)
    {
        printf("Halla Bol, Rajasthan Royals!\n");
    }
    else if (strcmp(team, "Sunrisers Hyderabad") == 0)
    {
        printf("Orange Army, Rise Up!\n");
    }
    else if (strcmp(team, "Delhi Capitals") == 0)
    {
        printf("Come on Delhi Capitals!\n");
    }
    else if (strcmp(team, "Punjab Kings") == 0)
    {
        printf("Sadda Punjab Kings!\n");
    }
    else if (strcmp(team, "Lucknow Super Giants") == 0)
    {
        printf("Let's Go Lucknow Super Giants!\n");
    }
    else if (strcmp(team, "Gujarat Titans") == 0)
    {
        printf("Aava De Gujarat Titans!\n");
    }
    else
    {
        printf("Team not found!\n");
    }

    return 0;
}