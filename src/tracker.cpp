#include "tracker.h"
#include <fstream>
#include <iostream>
using namespace std;

void addProgress(const string& topic, int problemsSolved) {
    ofstream file("data/progress.txt", ios::app);
    if (file.is_open()) {
        file << "Topic: " << topic << " | Problems Solved: " << problemsSolved << endl;
        file.close();
        cout << "✅ Progress saved successfully!\n";
    } else {
        cout << "❌ Error opening progress file.\n";
    }
}

void viewProgress() {
    ifstream file("data/progress.txt");
    string line;

    cout << "\n📈 Your DSA Progress:\n";
    cout << "----------------------\n";

    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
}

