//Modify your tasklist_c.c to add a function markTaskDone(int index) that sets the selected task to 'DONE' in the array, then print the updated list.<br><br><em><strong>Hint:</strong> Use a separate status array or append ' - DONE' to the task string.</em>


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