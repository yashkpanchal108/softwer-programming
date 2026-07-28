//Q3 Copy the string 'Flipkart' into another string variable called shoppingApp using strcpy(), then print the value of shoppingApp.<br><br><em><strong>Hint:</strong> Make sure to declare enough space for the destination string.</em>


#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Flipkart";
    char shoppingApp[20];   

    strcpy(shoppingApp, source);

    printf("%s\n", shoppingApp);

    return 0;
}





