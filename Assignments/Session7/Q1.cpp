//Create a text file called my_fav_songs.txt and write the names of your 5 favorite songs into it using ofstream.

#include <iostream>
#include <fstream> // Required for ofstream
#include <string>

using namespace std;

int main() {
    
    ofstream outFile("my_fav_songs.txt");

    if (!outFile) {
        cerr << "Error creating file!" << endl;
        return 1;
    }

    string songs[5] = {
        "1. Hotel California",
        "2. Bohemian Rhapsody",
        "3. Stairway to Heaven",
        "4. Imagine",
        "5. Shape of You"
    };

    for (int i = 0; i < 5; i++) {
        outFile << songs[i] << endl;
    }

    outFile.close();

    cout << "Successfully written 5 songs to my_fav_songs.txt!" << endl;

    return 0;
}