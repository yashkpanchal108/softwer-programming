//Create a class called Playlist with properties: name (string), createdOn (date), and isPublic (boolean). Instantiate an object of Playlist and print all its properties.

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

   
    void displayDetails() const {
        std::cout << "--- Playlist Details ---" << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Created On: " << createdOn << std::endl;
        std::cout << "Is Public: " << (isPublic ? "true" : "false") << std::endl;
    }
};

int main() {
  
    Playlist myPlaylist("Favorites 2026", "2026-08-13", true);

    
    myPlaylist.displayDetails();

    return 0;
}