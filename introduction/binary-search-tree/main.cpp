#include <iostream>
#include "BST.cpp"
using namespace std;

int main() {

    int arr[] = {5, 3, 2, 4, 7, 6, 6, 8};
    int n = sizeof(arr)/sizeof(arr[0]);

    BinarySearchTree* b = new BinarySearchTree(arr, n);

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

    cout << "Found 1: " << b->search(1) << endl;
    cout << "Found 5: " << b->search(5) << endl;
    cout << "Found 6: " << b->search(6) << endl;
    cout << "Found 7: " << b->search(7) << endl;
    cout << "Found 9: " << b->search(9) << endl;
    cout << "Found 8: " << b->search(8) << endl;
      
    return 0;
}