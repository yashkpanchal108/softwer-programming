//Given a file called insta_followers.txt containing Instagram usernames (one per line), write a program to count and display the total number of followers listed in the file.<br><br><em><strong>Constraint:</strong> Do not use any array or vector to store the names—just count as you read.</em>


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
   
    ifstream inFile("insta_followers.txt");

    if (!inFile) {
        cerr << "Error: Could not open insta_followers.txt!" << endl;
        return 1;
    }

    string username;
    int followerCount = 0;

    while (getline(inFile, username)) {
       
        if (!username.empty()) {
            followerCount++;
        }
    }

    inFile.close();

    cout << "Total Followers: " << followerCount << endl;

    return 0;
}