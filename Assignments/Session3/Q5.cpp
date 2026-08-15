//Modify your Playlist class so that it auto-saves the playlist name to a file called autosave.txt when the object is destroyed, simulating an auto-save feature like Spotify.<br><br><em><strong>Hint:</strong> Write the file-saving code inside the destructor.</em>


#include <iostream>
#include <fstream>
#include <string>

class Playlist {
public:
    std::string name;

    Playlist(std::string playlistName = "My Favourites") : name(playlistName) {
        std::cout << "Playlist '" << name << "' created." << std::endl;
    }

    ~Playlist() {
        std::ofstream outFile("autosave.txt");
        if (outFile.is_open()) {
            outFile << "Playlist Name: " << name << "\n";
            outFile.close();
            std::cout << "Auto-saved '" << name << "' to autosave.txt" << std::endl;
        } else {
            std::cerr << "Unable to open autosave.txt for writing." << std::endl;
        }
    }
};

int main() {
    std::cout << " Initializing Playlist dynamically" << std::endl;
    Playlist* myPlaylist = new Playlist("Chill Vibes");

    std::cout << "\n Destroying Playlist Object " << std::endl;
   
    delete myPlaylist;

    return 0;
}