//Create a class called FoodOrder with properties: orderId (number), restaurantName (string), and isDelivered (boolean). Write a member function markDelivered() that sets isDelivered to true and prints a message. Instantiate FoodOrder and call markDelivered().

#include <iostream>
#include <string>

class FoodOrder {
public:
    int orderId;
    std::string restaurantName;
    bool isDelivered;

    
    FoodOrder(int id, std::string name, bool delivered = false) {
        orderId = id;
        restaurantName = name;
        isDelivered = delivered;
    }

    
    void markDelivered() {
        isDelivered = true;
        std::cout << "Order #" << orderId << " from " << restaurantName << " has been delivered!" << std::endl;
    }
};

int main() {
   
    FoodOrder order1(101, "Spice Villa");

    
    order1.markDelivered();

    return 0;
}