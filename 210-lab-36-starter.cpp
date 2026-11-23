//Lab 36 | COMSC 210 | Ismael Hadi
#include <iostream>
#include <fstream>
#include <string>
#include "IntBinaryTree.h"
using namespace std;

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

    tree.displayInOrder();    

    return 0;
}