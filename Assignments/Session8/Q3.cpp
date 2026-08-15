//Implement a function to read all content items from content_list.txt and display them in a numbered list, showing title and platform for each.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void displayContent()
{
    ifstream file("content_list.txt");

    string title, platform, line;
    int count = 1;

    cout << " Content List " << endl;

    while (getline(file, line))
    {
        if (line.find("Title: ") == 0)
        {
            title = line.substr(7);

            getline(file, line);
            platform = line.substr(10);

          
            getline(file, line);
            getline(file, line);
            getline(file, line);

            cout << count << ". "
                 << "Title: " << title
                 << " | Platform: " << platform << endl;

            count++;
        }
    }

    file.close();
}

int main()
{
    displayContent();

    return 0;
}