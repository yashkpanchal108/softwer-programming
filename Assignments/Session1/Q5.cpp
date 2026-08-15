//Compare your procedural C version and OOP TaskList version: List 3 problems you faced in the C version that were solved by
//using classes and methods in the OOP version.

#include <iostream>
#include <vector>
#include <string>

// --- Task 1 & 2: Procedural C-Style Approach ---
char globalTasks[5][100];
bool globalTaskStatus[5] = {false};
int globalTaskCount = 0;

void addCTask(const char* taskName) {
    if (globalTaskCount < 5) {
        int i = 0;
        while (taskName[i] != '\0' && i < 99) {
            globalTasks[globalTaskCount][i] = taskName[i];
            i++;
        }
        globalTasks[globalTaskCount][i] = '\0';
        globalTaskCount++;
    }
}

void markTaskDoneC(int index) {
    if (index >= 0 && index < globalTaskCount) {
        globalTaskStatus[index] = true;
    }
}

void printCTasks() {
    std::cout << "--- Procedural C Task List ---" << std::endl;
    for (int i = 0; i < globalTaskCount; i++) {
        std::cout << "[" << i << "] " << globalTasks[i] 
                  << " - " << (globalTaskStatus[i] ? "DONE" : "PENDING") << std::endl;
    }
}


// --- Task 3: Task Class (OOP) ---
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


// --- Task 4: TaskList Class (OOP) ---
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
            std::cout << "Invalid index: " << index << std::endl;
        }
    }

    void showTasks() const {
        std::cout << "\n--- OOP Task List ---" << std::endl;
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
    // Demonstrating C-style procedural tasks (1 & 2)
    addCTask("C Task 1");
    addCTask("C Task 2");
    markTaskDoneC(0);
    printCTasks();

    // Demonstrating OOP TaskList (3 & 4)
    TaskList myTaskList;
    myTaskList.addTask("Complete C++ Assignment");
    myTaskList.addTask("Push Code to GitHub");
    myTaskList.addTask("Review OOP Principles");

    myTaskList.markTaskDone(1);
    myTaskList.showTasks();

    return 0;
}