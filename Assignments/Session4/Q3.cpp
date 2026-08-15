//Create a Podcaster class that also inherits from SocialMediaUser and adds a property podcastName and a method publishEpisode(episodeTitle) that prints 'Episode [episodeTitle] published on [podcastName]'.

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

class Podcaster : public SocialMediaUser {
private:
    std::string podcastName;

public:
    
    Podcaster(std::string user, int followerCount, std::string podcast)
        : SocialMediaUser(user, followerCount), podcastName(podcast) {}

    void publishEpisode(std::string episodeTitle) {
        std::cout << "Episode " << episodeTitle << " published on " << podcastName << std::endl;
    }
};

int main() {
    Podcaster podUser("TechTalks", 12000, "The Tech Hour");

    podUser.displayProfile();

    podUser.publishEpisode("Future of AI");

    return 0;
}