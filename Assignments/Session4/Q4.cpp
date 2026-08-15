//Demonstrate multilevel inheritance by creating a class GamingYouTuber that inherits from YouTuber and adds a method streamGame(gameName) which prints '[username] is now streaming [gameName] on [channelName]'.

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

class YouTuber : public SocialMediaUser {
protected:
    std::string channelName;

public:
    YouTuber(std::string user, int followerCount, std::string channel)
        : SocialMediaUser(user, followerCount), channelName(channel) {}

    void uploadVideo(std::string title) {
        std::cout << "Video " << title << " uploaded to " << channelName << std::endl;
    }
};

class GamingYouTuber : public YouTuber {
public:
    GamingYouTuber(std::string user, int followerCount, std::string channel)
        : YouTuber(user, followerCount, channel) {}

    void streamGame(std::string gameName) {
        std::cout << username << " is now streaming " << gameName << " on " << channelName << std::endl;
    }
};

int main() {
    GamingYouTuber gamer("PixelPro", 25000, "Pixel Gaming");

    gamer.displayProfile();

    gamer.uploadVideo("Top 10 Gaming Moments");

    gamer.streamGame("Minecraft");

    return 0;
}