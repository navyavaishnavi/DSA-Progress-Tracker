#include "tracker.h"
#include <iostream>
using namespace std;

void addProgress(const string& topic, int problemsSolved) {
    cout << "Topic: " << topic << endl;
    cout << "Problems Solved: " << problemsSolved << endl;
}

void viewProgress() {
    cout << "Viewing DSA Progress..." << endl;
}
