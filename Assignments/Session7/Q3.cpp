//Modify your code to append a new song name entered by the user to my_fav_songs.txt without overwriting the existing list.<br><br><em><strong>Hint:</strong> Open the file in append mode using ofstream.</em>

#include <iostream>
#include <fstream> 
#include <string>

using namespace std;

int main() {
   
    ofstream outFile("my_fav_songs.txt", ios::app);

    if (!outFile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    string newSong;

    cout << "Enter the name of a new song to add: ";
    getline(cin, newSong);

    outFile << newSong << endl;

    outFile.close();

    cout << "Successfully appended \"" << newSong << "\" to my_fav_songs.txt!" << endl;

    return 0;
}