//Build a console menu that lets users add new content ideas (title, platform, views, status) and save each entry to a text file named content_list.txt.<br><br><em><strong>Hint:</strong> Use file handling to append each new content item to the file.</em>


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Content {
private:
    string title;
    string platform;
    int views;
    string status;

public:
    
    Content(string t, string p, int v, string s) 
        : title(t), platform(p), views(v), status(s) {}

    void saveToFile() const {
        ofstream outFile("content_list.txt", ios::app); 

        if (!outFile) {
            cerr << "Error: Unable to open content_list.txt for writing!" << endl;
            return;
        }

        outFile << title << "\n" 
                << platform << "\n" 
                << views << "\n" 
                << status << "\n";

        outFile.close();
        cout << "\n✅ Content idea successfully saved to content_list.txt!\n" << endl;
    }
};

int main() {
    int choice;

    do {
        cout << "=================================" << endl;
        cout << "   CREATOR DASHBOARD MENU        " << endl;
        cout << "=================================" << endl;
        cout << "1. Add New Content Idea" << endl;
        cout << "2. Exit" << endl;
        cout << "Enter your choice (1-2): ";
        cin >> choice;

        if (choice == 1) {
            string title, platform, status;
            int views;

            cin.ignore();

            cout << "\n--- Add New Content Idea ---" << endl;
            cout << "Enter Title    : ";
            getline(cin, title);

            cout << "Enter Platform : ";
            getline(cin, platform);

            cout << "Enter Views    : ";
            cin >> views;

            cin.ignore(); 
            cout << "Enter Status (e.g., Draft/Scheduled/Published): ";
            getline(cin, status);

            
            Content newContent(title, platform, views, status);
            newContent.saveToFile();

        } else if (choice != 2) {
            cout << "\n❌ Invalid choice! Please try again.\n" << endl;
        }

    } while (choice != 2);

    cout << "\nExiting Program. Goodbye!" << endl;

    return 0;
}
