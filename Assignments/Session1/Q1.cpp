//Write a simple C program tasklist_c.c that allows you to add up to 5 tasks (as strings) to a global array and print all tasks using a for loop.

#include <stdio.h>
#include <string.h>

#define MAX_TASKS 5
#define MAX_LEN 100

char taskList[MAX_TASKS][MAX_LEN];
int taskCount = 0;

void addTask(const char *task) {
    if (taskCount < MAX_TASKS) {
        strncpy(taskList[taskCount], task, MAX_LEN - 1);
        taskList[taskCount][MAX_LEN - 1] = '\0';
        taskCount++;
    } else {
        printf("Task list is full! Cannot add: %s\n", task);
    }
}

void printTasks() {
    printf("\n--- Task List ---\n");
    for (int i = 0; i < taskCount; i++) {
        printf("%d. %s\n", i + 1, taskList[i]);
    }
}

int main() {
    
    addTask("Buy groceries");
    addTask("Finish assignment");
    addTask("Read a book");
    addTask("Go for a run");
    addTask("Clean the desk");

    printTasks();

    return 0;
}

