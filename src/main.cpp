#include <iostream>
#include "tracker.h"
using namespace std;

int main() {
    int choice;
    string topic;
    int solved;

    do {
        cout << "\n--- DSA Progress Tracker ---\n";
        cout << "1. Add Progress\n";
        cout << "2. View Progress\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Topic: ";
                cin >> topic;
                cout << "Problems Solved: ";
                cin >> solved;
                addProgress(topic, solved);
                break;

            case 2:
                viewProgress();
                break;

            case 3:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice\n";
        }
    } while (choice != 3);

    return 0;
}

