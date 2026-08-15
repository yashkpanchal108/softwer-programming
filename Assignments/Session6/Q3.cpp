//Imagine a Flipkart-like app: create an abstract class Product with an abstract method upload(). Then, create two subclasses, Electronics and Clothing, that each implement the upload() method to print a different upload message.

#include <iostream>
#include <string>


class Product {
protected:
    std::string productName;
    double price;

public:
    Product(std::string name, double p) : productName(name), price(p) {}

    virtual void upload() = 0;

    virtual ~Product() {}
};

class Electronics : public Product {
private:
    int warrantyMonths;

public:
    Electronics(std::string name, double price, int warranty) 
        : Product(name, price), warrantyMonths(warranty) {}

   
    void upload() override {
        std::cout << "[Electronics Upload] Listing '" << productName 
                  << "' ($" << price << ") with " << warrantyMonths 
                  << "-month warranty and technical specifications..." << std::endl;
    }
};


class Clothing : public Product {
private:
    std::string size;

public:
    Clothing(std::string name, double price, std::string s) 
        : Product(name, price), size(s) {}

  
    void upload() override {
        std::cout << "[Clothing Upload] Listing '" << productName 
                  << "' ($" << price << ") in size [" << size 
                  << "] with size chart and fabric details..." << std::endl;
    }
};

int main() {
  
    Product* item1 = new Electronics("Wireless Headphones", 99.99, 12);
    Product* item2 = new Clothing("Denim Jacket", 49.99, "XL");

    item1->upload();
    item2->upload();

    delete item1;
    delete item2;

    return 0;
}