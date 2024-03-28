#include <iostream>
#include "BinaryTree.cpp"
using namespace std;

int main() {

    BinaryTree* b = new BinaryTree();

    cout << "Pre-order traversal: ";
    b->preOrderTraversal(b->root);
    cout << endl;

    cout << "In-order traversal: ";
    b->inOrderTraversal(b->root);
    cout << endl;

    cout << "Post-order traversal: ";
    b->postOrderTraversal(b->root);
    cout << endl;
    
    cout << "Level-order traversal: ";
    b->levelOrderTraversal();
    cout << endl;

    
    return 0;
}