//Lab 36 | COMSC 210 | Ismael Hadi
#include <iostream>
#include <fstream>
#include <string>
#include "IntBinaryTree.h"
using namespace std;

//main_menu based on code from my goat manager 3001 program
int main_menu() {
    int choice = 0;
    //Engine loop
    while (true) {
        cout << "*** Binary Tree Manager ***" << endl;
        cout << "[1] Add a node" << endl << "[2] Delete a node" << endl << "[3] Search for a node" << endl << "[4] Modify nodes" << "[5] Exit" << endl;
        cout << "Choice --> ";
        cin >> choice;
        if (choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == 5) {
            return choice;
        }
        else {
            cout << "Choice must be an integer between 1 and 5, try again" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }
};

int main() {
    IntBinaryTree tree;
    //File input setup
    ifstream fin("codes.txt");
    if (!fin.is_open()) {
        cerr << "Error: Could not open file." << endl;
        return 1;
    }
    
    string line;
    while (getline(fin, line)) {
        tree.insertNode(line);
    }

    int choice  

    return 0;
}