//Create a class called Playlist with a default constructor that sets the playlist name to 'My Favourites' and prints a welcome message when an object is created.

#include <iostream>
#include <string>

class Playlist {
public:
    std::string name;
    
    Playlist() {
        name = "My Favourites";
        std::cout << "Welcome to your Playlist: " << name << "!" << std::endl;
    }
};

int main() {
  
    Playlist myPlaylist;

    return 0;
}