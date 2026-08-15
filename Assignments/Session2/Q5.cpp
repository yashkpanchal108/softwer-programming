//Refactor your FoodOrder class so that the constructor takes an object as a parameter (with keys orderId, restaurantName, isDelivered) instead of separate arguments. Update your instantiation code to use this new constructor signature.

#include <iostream>
#include <string>


struct FoodOrderOptions {
    int orderId;
    std::string restaurantName;
    bool isDelivered = false;
};

class FoodOrder {
public:
    int orderId;
    std::string restaurantName;
    bool isDelivered;

    
    FoodOrder(const FoodOrderOptions& options) {
        orderId = options.orderId;
        restaurantName = options.restaurantName;
        isDelivered = options.isDelivered;
    }

   
    void markDelivered() {
        isDelivered = true;
        std::cout << "Order #" << orderId << " from " << restaurantName << " has been delivered!" << std::endl;
    }
};

int main() {
   
    FoodOrder order1({101, "Spice Villa", false});

    
    order1.markDelivered();

    return 0;
}