//Refactor the following code so that the user’s phone number in the UserProfile class is private and can only be set or retrieved using public methods.<br><br><em><strong>Hint:</strong> Add private access modifier to the phone number and create setPhoneNumber() and getPhoneNumber() methods.</em>

#include <iostream>
#include <string>

class UserProfile {
private:
   
    std::string username;
    std::string phoneNumber;

public:
   
    UserProfile(std::string user, std::string phone) 
        : username(user), phoneNumber(phone) {}

  
    std::string getUsername() const {
        return username;
    }

    void setUsername(const std::string& user) {
        username = user;
    }

    std::string getPhoneNumber() const {
        return phoneNumber;
    }

    void setPhoneNumber(const std::string& phone) {
        phoneNumber = phone;
    }

    void displayProfile() const {
        std::cout << "User: " << username << " | Phone: " << phoneNumber << std::endl;
    }
};

int main() {
   
    UserProfile user("alex_coder", "+1-555-0198");

    std::cout << " Initial Profile " << std::endl;
    user.displayProfile();

    user.setPhoneNumber("+1-555-9982");

    std::cout << "\n Updated Profile " << std::endl;
    std::cout << "Retrieved via getter: " << user.getPhoneNumber() << std::endl;
    user.displayProfile();

    return 0;
}