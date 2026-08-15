//Add a member function to your Playlist class named togglePublic() that switches isPublic between true and false each time it
//is called. Demonstrate by toggling the value twice and printing the result each time.

#include <iostream>
#include <string>

class Playlist {
public:
    std::string name;
    std::string createdOn;
    bool isPublic;

  
    Playlist(std::string playlistName, std::string date, bool publicStatus) {
        name = playlistName;
        createdOn = date;
        isPublic = publicStatus;
    }

  
    void togglePublic() {
        isPublic = !isPublic;
    }

    void displayStatus() const {
        std::cout << "Playlist: " << name << " | Is Public: " << (isPublic ? "true" : "false") << std::endl;
    }
};

int main() {
  
    Playlist myPlaylist("Favorites 2026", "2026-08-13", true);

    std::cout << "--- Initial State ---" << std::endl;
    myPlaylist.displayStatus();

  
    myPlaylist.togglePublic();
    std::cout << "\n--- After First Toggle ---" << std::endl;
    myPlaylist.displayStatus();

   
    myPlaylist.togglePublic();
    std::cout << "\n--- After Second Toggle ---" << std::endl;
    myPlaylist.displayStatus();

    return 0;
}