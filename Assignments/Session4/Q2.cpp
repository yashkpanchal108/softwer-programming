//Build a YouTuber class that inherits from SocialMediaUser and adds a property channelName and a method uploadVideo(title) that prints 'Video [title] uploaded to [channelName]'.

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

class GamingYouTuber : public YouTuber {
public:
    GamingYouTuber(std::string user, int followerCount, std::string channel)
        : YouTuber(user, followerCount, channel) {}

    void streamGame(std::string gameName) {
        std::cout << username << " is now streaming " << gameName << " on " << channelName << std::endl;
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

    std::cout << "=== Task 2: YouTuber ===" << std::endl;
    YouTuber ytUser("CodeCraft", 5000, "CodeCraft Academy");
    ytUser.displayProfile();
    ytUser.uploadVideo("C++ OOP Tutorial");

    std::cout << "\n Task 3: Podcaster " << std::endl;
    Podcaster podUser("TechTalks", 12000, "The Tech Hour");
    podUser.publishEpisode("Future of AI");

    std::cout << "\n Task 4: GamingYouTuber (Multilevel) " << std::endl;
    GamingYouTuber gamer("PixelPro", 25000, "Pixel Gaming");
    gamer.streamGame("Minecraft");

    std::cout << "\n Task 5: InstagramInfluencer " << std::endl;
    InstagramInfluencer influencer("Alex_Styles", 85000);
    influencer.postStory("Morning Coffee & Code");

    return 0;
}