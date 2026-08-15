//Create a Task class in your favorite OOP language (Java, Python, or C++) with properties: title and isDone. Add a method markDone() that sets isDone to true, and a method display() that prints the task with its status.

#include <iostream>
#include <string>

class Task {
private:
    std::string title;
    bool isDone;

public:
    
    Task(std::string taskTitle) : title(taskTitle), isDone(false) {}

    void markDone() {
        isDone = true;
    }

    
    void display() const {
        std::string status = isDone ? "Done" : "Pending";
        std::cout << "Task: " << title << " | Status: [" << status << "]" << std::endl;
    }
};

int main() {
    
    Task task1("Complete Assignment");

    
    task1.display();

    
    task1.markDone();
    task1.display();

    return 0;
}