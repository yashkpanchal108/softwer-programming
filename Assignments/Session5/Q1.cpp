//Create a Java class called PaymentProcessor with two overloaded methods processPayment(): one that takes only an amount, and one that takes amount and a coupon code. Print which version is called and the final amount in each case.

#include <iostream>
#include <string>
#include <algorithm>

class PaymentProcessor {
public:
   
    void processPayment(double amount) {
        std::cout << "Calling processPayment(double amount)..." << std::endl;
        std::cout << "Processing standard payment." << std::endl;
        std::cout << "Final amount to pay: $" << amount << std::endl;
        std::cout << "--" << std::endl;
    }

    void processPayment(double amount, std::string couponCode) {
        std::cout << "Calling processPayment(double amount, std::string couponCode)..." << std::endl;
        
        double discount = 0.0;
        
        std::string upperCoupon = couponCode;
        std::transform(upperCoupon.begin(), upperCoupon.end(), upperCoupon.begin(), ::toupper);

        if (upperCoupon == "SAVE10") {
            discount = 10.0;
            std::cout << "Coupon '" << couponCode << "' applied! You saved $10." << std::endl;
        } else if (upperCoupon == "HALFPRICE") {
            discount = amount * 0.5;
            std::cout << "Coupon '" << couponCode << "' applied! You saved 50%." << std::endl;
        } else {
            std::cout << "Coupon '" << couponCode << "' is invalid or expired." << std::endl;
        }

        double finalAmount = (amount - discount > 0) ? (amount - discount) : 0.0;
        std::cout << "Final amount to pay: $" << finalAmount << std::endl;
        std::cout << "--" << std::endl;
    }
};

int main() {
    PaymentProcessor processor;

    processor.processPayment(100.00);

    processor.processPayment(100.00, "SAVE10");
    processor.processPayment(200.00, "HALFPRICE");
    processor.processPayment(50.00, "INVALID_CODE");

    return 0;
}