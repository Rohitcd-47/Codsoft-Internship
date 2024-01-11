#include <bits/stdc++.h>
using namespace std;

struct Task {
    string description;
    bool completed;

    Task(const string& desc) : description(desc), completed(false) {}
};

class TaskManager {
private:
    vector<Task> tasks;

public:
    void addTask(const string& description) {
        Task newTask(description);
        tasks.push_back(newTask);
        cout << "Task added successfully.\n";
    }

    void viewTasks() {
        if (tasks.empty()) {
            cout << "No tasks available.\n";
        } else {
            cout << "Tasks:\n";
            for (const Task& task : tasks) {
                cout << "- " << task.description << " [" << (task.completed ? "Completed" : "Pending") << "]\n";
            }
        }
    }

    void markTaskAsCompleted(int taskIndex) {
        if (taskIndex >= 0 && taskIndex < tasks.size()) {
            tasks[taskIndex].completed = true;
            cout << "Task marked as completed.\n";
        } else {
            cout << "Invalid task index.\n";
        }
    }

    void removeTask(int taskIndex) {
        if (taskIndex >= 0 && taskIndex < tasks.size()) {
            tasks.erase(tasks.begin() + taskIndex);
            cout << "Task removed successfully.\n";
        } else {
            cout << "Invalid task index.\n";
        }
    }
};

int main() {
    TaskManager taskManager;
    int choice;

    do {
        cout << "\nTask Manager Menu:\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string taskDescription;
                cout << "Enter task description: ";
                cin.ignore(); // Ignore the newline character in the buffer
                getline(cin, taskDescription);
                taskManager.addTask(taskDescription);
                break;
            }
            case 2:
                taskManager.viewTasks();
                break;
            case 3: {
                int taskIndex;
                cout << "Enter task index to mark as completed: ";
                cin >> taskIndex;
                taskManager.markTaskAsCompleted(taskIndex);
                break;
            }
            case 4: {
                int taskIndex;
                cout << "Enter task index to remove: ";
                cin >> taskIndex;
                taskManager.removeTask(taskIndex);
                break;
            }
            case 5:
                cout << "Exiting the Task Manager.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
