//Write a function in Java or Python that simulates a Flipkart-style search: overload a method searchProduct() to allow searching by product name or by product name and category. Demonstrate both usages with sample data.

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

struct Product {
    std::string name;
    std::string category;
    double price;
};

class FlipkartSearch {
private:
    std::vector<Product> catalog;

    std::string toLower(std::string str) {
        std::transform(str.begin(), str.end(), str.begin(), ::tolower);
        return str;
    }

public:
    FlipkartSearch() {
       
        catalog = {
            {"iPhone 15", "Electronics", 799.00},
            {"Samsung Galaxy S24", "Electronics", 899.00},
            {"Nike Running Shoes", "Footwear", 120.00},
            {"Adidas Sneakers", "Footwear", 95.00},
            {"iPhone Case", "Accessories", 25.00}
        };
    }

    std::vector<Product> searchProduct(std::string productName) {
        std::cout << "\nSearching for: '" << productName << "' across all categories..." << std::endl;
        std::vector<Product> results;
        std::string searchKey = toLower(productName);

        for (const auto& product : catalog) {
            if (toLower(product.name).find(searchKey) != std::string::npos) {
                results.push_back(product);
            }
        }
        return results;
    }

   
    std::vector<Product> searchProduct(std::string productName, std::string category) {
        std::cout << "\nSearching for: '" << productName << "' in Category: '" << category << "'..." << std::endl;
        std::vector<Product> results;
        std::string searchKey = toLower(productName);
        std::string categoryKey = toLower(category);

        for (const auto& product : catalog) {
            bool matchesName = toLower(product.name).find(searchKey) != std::string::npos;
            bool matchesCategory = (toLower(product.category) == categoryKey);

            if (matchesName && matchesCategory) {
                results.push_back(product);
            }
        }
        return results;
    }

    void displayResults(const std::vector<Product>& products) {
        if (products.empty()) {
            std::cout << "No products found." << std::endl;
        } else {
            for (const auto& p : products) {
                std::cout << "- " << p.name << " [" << p.category << "] - $" << p.price << std::endl;
            }
        }
    }
};

int main() {
    FlipkartSearch searchEngine;

    std::vector<Product> resultsByName = searchEngine.searchProduct("iPhone");
    searchEngine.displayResults(resultsByName);

  
    std::vector<Product> resultsWithCategory = searchEngine.searchProduct("iPhone", "Electronics");
    searchEngine.displayResults(resultsWithCategory);

    return 0;
}