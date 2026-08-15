//Implement hierarchical inheritance by creating an InstagramInfluencer class that inherits from SocialMediaUser and adds a method postStory(storyTitle) which prints '[username] posted a new story: [storyTitle]'.<br><br><em><strong>Hint:</strong> Think about how SocialMediaUser is the parent for YouTuber, Podcaster, and InstagramInfluencer.</em>


#include <iostream>
#include <string>

class SocialMediaUser {
protected:
    std::string username;
    int followers;

public:
    SocialMediaUser(std::string user, int followerCount) 
        : username(user), followers(followerCount) {}

    virtual void displayProfile() {
        std::cout << "User: " << username << " | Followers: " << followers << std::endl;
    }
};

class InstagramInfluencer : public SocialMediaUser {
public:
    InstagramInfluencer(std::string user, int followerCount)
        : SocialMediaUser(user, followerCount) {}

    void postStory(std::string storyTitle) {
        std::cout << username << " posted a new story: " << storyTitle << std::endl;
    }
};

int main() {
    InstagramInfluencer influencer("Alex_Styles", 85000);

    influencer.displayProfile();

    influencer.postStory("Morning Coffee & Code");

    return 0;
}