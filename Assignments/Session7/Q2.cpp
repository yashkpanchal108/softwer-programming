//Read all song names from my_fav_songs.txt using ifstream and display each song on a new line in the console.

#include <iostream>
#include <fstream> // Required for ifstream
#include <string>

using namespace std;

int main() {
   
    ifstream inFile("my_fav_songs.txt");

    if (!inFile) {
        cerr << "Error: Could not open my_fav_songs.txt!" << endl;
        return 1;
    }

    string song;

    cout << " Songs from my_fav_songs.txt " << endl;

    while (getline(inFile, song)) {
        cout << song << endl;
    }

    inFile.close();

    return 0;
}