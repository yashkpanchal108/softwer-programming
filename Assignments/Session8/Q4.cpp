//Add an option in your console app to let users update the status of any content idea by selecting its number from the displayed list and saving the change back to the file.<br><br><em><strong>Hint:</strong> You will need to read all items, modify the selected one, and overwrite the file.</em>



#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct Content
{
    string title;
    string platform;
    int views;
    string status;
};


vector<Content> readContent()
{
    vector<Content> list;
    ifstream file("content_list.txt");

    Content c;
    string line;

    while (getline(file, line))
    {
        if (line.find("Title: ") == 0)
        {
            c.title = line.substr(7);

            getline(file, line);
            c.platform = line.substr(10);

            getline(file, line);
            c.views = stoi(line.substr(7));

            getline(file, line);
            c.status = line.substr(8);

            getline(file, line); 

            list.push_back(c);
        }
    }

    file.close();

    return list;
}


void displayContent(vector<Content> list)
{
    cout << "\n Content List " << endl;

    for (int i = 0; i < list.size(); i++)
    {
        cout << i + 1 << ". "
             << list[i].title
             << " | "
             << list[i].platform
             << " | Status: "
             << list[i].status << endl;
    }
}


void saveContent(vector<Content> list)
{
    ofstream file("content_list.txt");

    for (int i = 0; i < list.size(); i++)
    {
        file << "Title: " << list[i].title << endl;
        file << "Platform: " << list[i].platform << endl;
        file << "Views: " << list[i].views << endl;
        file << "Status: " << list[i].status << endl;
        file << "----" << endl;
    }

    file.close();
}

int main()
{
    vector<Content> list = readContent();

    displayContent(list);

    int number;

    cout << "\nEnter content number to update status: ";
    cin >> number;

    if (number >= 1 && number <= list.size())
    {
        cin.ignore();

        cout << "Enter new status: ";
        getline(cin, list[number - 1].status);

        saveContent(list);

        cout << "\nStatus updated successfully!" << endl;
    }
    else
    {
        cout << "\nInvalid content number!" << endl;
    }

    return 0;
}