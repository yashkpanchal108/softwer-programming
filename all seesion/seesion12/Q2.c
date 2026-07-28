//Q2 Create a structure called FoodItem to store Zomato-style menu data: itemName (string), price (float), and rating (float). Initialize an array of 3 FoodItem variables with real menu items and display their details using a loop.


#include <stdio.h>

struct FoodItem {
    char itemName[100];
    float price;
    float rating;
};

int main() {
    struct FoodItem menu[3] = {
        {"Paneer Butter Masala", 250.00, 4.5},
        {"Veg Biryani", 180.00, 4.2},
        {"Chocolate Brownie", 120.00, 4.7}
    };

    
    for (int i = 0; i < 3; i++) {
        printf("Food Item %d\n", i + 1);
        printf("Name: %s\n", menu[i].itemName);
        printf("Price: Rs. %.2f\n", menu[i].price);
        printf("Rating: %.1f/5\n", menu[i].rating);
        printf("----------------------\n");
    }

    return 0;
}
