//Q5. Refactor an existing function you wrote above to make it reusable for both product names and usernames (for example, a function that capitalizes the first letter of any string).<br><br><em><strong>Constraint:</strong> The refactored function should work for any string input, not just a specific use case.</em>

#include <stdio.h>
#include <ctype.h>


void capitalizeFirstLetter(char str[])
{
    if (str[0] != '\0')
    {
        str[0] = toupper(str[0]);
    }
}

int main()
{
    char productName[] = "laptop";
    char userName[] = "kinjal";

  
    capitalizeFirstLetter(productName);
    capitalizeFirstLetter(userName);

    printf("Product Name: %s\n", productName);
    printf("Username: %s\n", userName);

    return 0;
}