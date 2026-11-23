//Lab 36 | COMSC 210 | Ismael Hadi
#include <iostream>
#include "IntBinaryTree.h"
using namespace std;

int main() {
    //code for testing string conversion
    IntBinaryTree testree;
    testree.insertNode("AAAA");
    testree.insertNode("BBBB");
    testree.insertNode("CCCC");
    testree.displayInOrder();
    cout << "Expected output is 1. Real output: " << testree.searchNode("AAAA") << endl;
    cout << "Expected output is 0. Real output: "  << testree.searchNode("NOTHERE") << endl;
    cout << "Now removing first node... New tree: " << endl;
    testree.remove("AAAA");
    testree.displayInOrder();

    return 0;
}