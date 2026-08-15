//Build a Flipkart-style wishlist tracker: ask the user to enter 3 product names and prices, save them to a file called wishlist.txt, then read the file and display each product with its price.

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    // ----------------------------------------------------
    // PART 1: Write Product Details to wishlist.txt
    // ----------------------------------------------------
    ofstream outFile("wishlist.txt");

    if (!outFile) {
        cerr << "Error creating wishlist.txt file!" << endl;
        return 1;
    }

    cout << " Flipkart Wishlist Tracker " << endl;
    cout << "Enter details for 3 products:\n" << endl;

    for (int i = 1; i <= 3; i++) {
        string productName;
        double price;

        cout << "Product " << i << " Name: ";
        getline(cin >> ws, productName); 

        cout << "Product " << i << " Price (in ₹): ";
        cin >> price;
        cout << "---" << endl;

        outFile << productName << endl;
        outFile << price << endl;
    }

    outFile.close();
    cout << "\nWishlist saved successfully to 'wishlist.txt'!\n" << endl;

    // ----------------------------------------------------
    // PART 2: Read and Display Products from wishlist.txt
    // ----------------------------------------------------
    ifstream inFile("wishlist.txt");

    if (!inFile) {
        cerr << "Error reading wishlist.txt file!" << endl;
        return 1;
    }

    cout << "=================================" << endl;
    cout << "       YOUR SAVED WISHLIST       " << endl;
    cout << "=================================" << endl;

    string productName;
    double price;
    int count = 1;

    while (getline(inFile, productName) && inFile >> price) {
        inFile.ignore(); 
        cout << count++ << ". " << productName 
             << " - ₹" << fixed << setprecision(2) << price << endl;
    }

    inFile.close();

    return 0;
}