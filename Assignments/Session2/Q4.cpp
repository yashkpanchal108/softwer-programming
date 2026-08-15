//Extend your Playlist class to include a member function addSong(songTitle) that adds the song title to an array property called songs. Demonstrate by adding three song titles and displaying the updated songs list.<br><br><em><strong>Hint:</strong> Initialize songs as an empty array inside the constructor.</em>

#include <iostream>
#include <string>
#include <vector>

class Playlist {
public:
    std::string name;
    std::string createdOn;
    bool isPublic;
    std::vector<std::string> songs; // Array/List property

    // Constructor initializing songs as an empty vector
    Playlist(std::string pName, std::string pCreatedOn, bool pIsPublic = false) 
        : name(pName), createdOn(pCreatedOn), isPublic(pIsPublic), songs({}) {}

    // Member function to add a song to the array
    void addSong(const std::string& songTitle) {
        songs.push_back(songTitle);
    }

    // Function to display the updated songs list
    void displaySongs() const {
        std::cout << "Playlist '" << name << "' Songs:\n";
        for (size_t i = 0; i < songs.size(); ++i) {
            std::cout << i + 1 << ". " << songs[i] << "\n";
        }
    }
};

int main() {
    // Instantiate Playlist
    Playlist myPlaylist("Chill Vibes", "2026-08-13", true);

    // Add three song titles
    myPlaylist.addSong("Bohemian Rhapsody");
    myPlaylist.addSong("Hotel California");
    myPlaylist.addSong("Stairway to Heaven");

    // Display updated songs list
    myPlaylist.displaySongs();

    return 0;
}