#include <iostream>
#include "tracker.h"
using namespace std;

int main() {
    int choice;
    string topic;
    int problems;

    while (true) {
        cout << "\n==== DSA Progress Tracker ====\n";
        cout << "1. Add Progress\n";
        cout << "2. View Progress\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter Topic Name: ";
            cin >> topic;
            cout << "Problems Solved: ";
            cin >> problems;
            addProgress(topic, problems);
        }
        else if (choice == 2) {
            viewProgress();
        }
        else if (choice == 3) {
            cout << "Exiting program...\n";
            break;
        }
        else {
            cout << "Invalid choice!\n";
        }

        cout << "\nPress Enter to continue...";
        cin.ignore();
        cin.get();
    }

    return 0;
}



