//Build a class Product for a Flipkart-style app with a parameterized constructor that takes productName, price, and rating as arguments and displays all details using a displayInfo() method.

#include <iostream>
#include <string>

class Product {
public:
    std::string productName;
    double price;
    double rating;

    Product(std::string name, double p, double r) {
        productName = name;
        price = p;
        rating = r;
    }

    void displayInfo() {
        std::cout << "Product Details" << std::endl;
        std::cout << "Product Name : " << productName << std::endl;
        std::cout << "Price        : Rs. " << price << std::endl;
        std::cout << "Rating       : " << rating << " / 5" << std::endl;
    }
};

int main() {
   
    Product product1("Wireless Headphones", 1999.00, 4.5);

    product1.displayInfo();

    return 0;
}