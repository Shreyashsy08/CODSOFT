#include <iostream>
#include <string>

const int MAX_TASKS = 10;

// Function to display the to-do list
void displayTasks(const std::string tasks[], int taskCount) {
    if (taskCount == 0) {
        std::cout << "No tasks in the to-do list." << std::endl;
        return;
    }

    std::cout << "To-Do List:" << std::endl;
    for (int i = 0; i < taskCount; i++) {
        std::cout << i + 1 << ". " << tasks[i] << std::endl;
    }
}

int main() {
    std::string tasks[MAX_TASKS];
    int taskCount = 0;

    while (true) {
        std::cout << "To-Do List Menu:" << std::endl;
        std::cout << "1. Add Task" << std::endl;
        std::cout << "2. Display Tasks" << std::endl;
        std::cout << "3. Quit" << std::endl;
        std::cout << "Enter your choice: ";

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1:
                if (taskCount < MAX_TASKS) {
                    std::cout << "Enter the task: ";
                    std::cin.ignore(); // Clear newline character from previous input
                    std::getline(std::cin, tasks[taskCount]);
                    taskCount++;
                } else {
                    std::cout << "To-Do list is full!" << std::endl;
                }
                break;
            case 2:
                displayTasks(tasks, taskCount);
                break;
            case 3:
                std::cout << "Exiting the to-do list application." << std::endl;
                return 0;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }


}