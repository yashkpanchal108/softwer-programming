//Q5.2 Build a Zomato-style food suggestion tool: take the user's preferred meal time ('breakfast', 'lunch', 'dinner', or 'snack') and use a switch-case statement to suggest a popular dish for that time. If the input doesn't match any meal, suggest 'Try some fruits!'.

#include <stdio.h>

int main() {
    int choice;

    printf("=== Zomato Food Suggestion Tool ===\n");
    printf("1. Breakfast\n");
    printf("2. Lunch\n");
    printf("3. Dinner\n");
    printf("4. Snack\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Suggested Dish: Masala Dosa\n");
            break;

        case 2:
            printf("Suggested Dish: Veg Biryani\n");
            break;

        case 3:
            printf("Suggested Dish: Paneer Butter Masala with Naan\n");
            break;

        case 4:
            printf("Suggested Dish: Samosa with Chai\n");
            break;

        default:
            printf("Try some fruits!\n");
    }

    return 0;
}