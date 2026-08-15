//Create a base class called SocialMediaUser with properties username and followers, and a method displayProfile() that prints the username and follower count.


#include <iostream>
#include <string>

class SocialMediaUser {
public:
    std::string username;
    int followers;

    SocialMediaUser(std::string uName, int fCount) : username(uName), followers(fCount) {}

    void displayProfile() const {
        std::cout << "Username: " << username << "\n"
                  << "Followers: " << followers << "\n";
    }
};

int main() {
    
    SocialMediaUser user1("alex_tech", 1500);

    user1.displayProfile();

    return 0;
}