//Create a Content class with properties: title, platform, views, and status. Write a method to display all details of a Content object.

#include <iostream>
#include <string>

using namespace std;

class Content {
private:
    string title;
    string platform;
    int views;
    string status;

public:
    
    Content() : title(""), platform(""), views(0), status("Draft") {}

    Content(string t, string p, int v, string s) {
        title = t;
        platform = p;
        views = v;
        status = s;
    }

    void displayDetails() const {
        cout << "---------------------------------" << endl;
        cout << "Title    : " << title << endl;
        cout << "Platform : " << platform << endl;
        cout << "Views    : " << views << endl;
        cout << "Status   : " << status << endl;
        cout << "---------------------------------" << endl;
    }
};

int main() {
   
    Content item1("C++ File Handling Tutorial", "YouTube", 1250, "Published");

    cout << " Content Details " << endl;
    item1.displayDetails();

    return 0;
}
