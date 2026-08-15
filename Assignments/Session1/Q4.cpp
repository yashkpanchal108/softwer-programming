//Build a simple TaskList class/object that stores multiple Task objects and provides addTask(title), markTaskDone(index), and showTasks() methods. Demonstrate adding 3 tasks, marking one as done, and displaying all tasks with their statuses.

#include <iostream>
#include <vector>
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

   
    void display(int index) const {
        std::cout << "[" << index << "] " << title 
                  << " - " << (isDone ? "DONE" : "PENDING") << std::endl;
    }
};

class TaskList {
private:
    std::vector<Task> tasks;

public:
    
    void addTask(const std::string& title) {
        tasks.push_back(Task(title));
    }

   
    void markTaskDone(int index) {
        if (index >= 0 && index < static_cast<int>(tasks.size())) {
            tasks[index].markDone();
        } else {
            std::cout << "Invalid task index: " << index << std::endl;
        }
    }

   
    void showTasks() const {
        std::cout << "\n--- Task List ---" << std::endl;
        if (tasks.empty()) {
            std::cout << "No tasks available." << std::endl;
            return;
        }

        for (size_t i = 0; i < tasks.size(); ++i) {
            tasks[i].display(i);
        }
    }
};

int main() {
    TaskList myTaskList;

  
    myTaskList.addTask("Complete C++ Assignment");
    myTaskList.addTask("Push Code to GitHub");
    myTaskList.addTask("Review OOP Principles");

    myTaskList.markTaskDone(1);
   
    myTaskList.showTasks();

    return 0;
}