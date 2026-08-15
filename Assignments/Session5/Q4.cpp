//Given this code: class MusicPlayer { void play(String song) { System.out.println("Playing: " + song); } } class SpotifyPlayer extends MusicPlayer { void play(String song) { System.out.println("Streaming on Spotify: " + song); } } — Create an object of type MusicPlayer but assign it a SpotifyPlayer instance, then call play(). Explain the output.<br><br><em><strong>Hint:</strong> This tests runtime polymorphism (overriding) and dynamic method dispatch.</em>


#include <iostream>
#include <string>

class MusicPlayer {
public:
    
    virtual void play(std::string song) {
        std::cout << "Playing: " << song << std::endl;
    }
   
    virtual ~MusicPlayer() {}
};

class SpotifyPlayer : public MusicPlayer {
public:
    void play(std::string song) override {
        std::cout << "Streaming on Spotify: " << song << std::endl;
    }
};

int main() {
    
    MusicPlayer* player = new SpotifyPlayer();

    player->play("Blinding Lights");

    delete player;

    return 0;
}