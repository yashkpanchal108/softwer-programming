//Create a class called Song in your preferred OOP language with private properties title and artist. Add public getter and setter methods to access and modify these properties, then create an object and update its title.

#include <iostream>
#include <string>

class Song {
private:
   
    std::string title;
    std::string artist;

public:
    // Constructor
    Song(std::string initialTitle, std::string initialArtist) 
        : title(initialTitle), artist(initialArtist) {}

    std::string getTitle() const {
        return title;
    }

    void setTitle(std::string newTitle) {
        title = newTitle;
    }

    std::string getArtist() const {
        return artist;
    }

    void setArtist(std::string newArtist) {
        artist = newArtist;
    }

    void displayInfo() const {
        std::cout << "Song: \"" << title << "\" by " << artist << std::endl;
    }
};

int main() {
   
    Song mySong("Initial Title", "The Beatles");

    std::cout << "--- Before Update ---" << std::endl;
    mySong.displayInfo();

    mySong.setTitle("Yesterday");

    std::cout << "\n--- After Update ---" << std::endl;
    std::cout << "Updated Title via Getter: " << mySong.getTitle() << std::endl;
    mySong.displayInfo();

    return 0;
}