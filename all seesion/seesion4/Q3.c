//Q4.3 Write a function isEligibleForOffer that takes a user's age and total order value, and returns true if the user is 18 or older AND the order value is above 500, otherwise false.<br><br><em><strong>Hint:</strong> Use relational and logical operators together.</em>


#include <stdio.h>

int isEligibleForOffer(int age, float orderValue)
{
    if (age >= 18 && orderValue > 500)
    {
        return 1;   // True
    }
    else
    {
        return 0;   // False
    }
}

int main()
{
    int age;
    float orderValue;

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Total Order Value: ");
    scanf("%f", &orderValue);

    if (isEligibleForOffer(age, orderValue))
    {
        printf("Eligible for Offer: True\n");
    }
    else
    {
        printf("Eligible for Offer: False\n");
    }

    return 0;
}