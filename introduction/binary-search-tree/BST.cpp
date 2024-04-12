#include <iostream>
#include <queue>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

class BinarySearchTree {
    public:
    Node* root;

    BinarySearchTree(int* arr, int n) {
        this->root = NULL;
        createBST(arr, n);
    }

    void createBST(int* arr, int n) {
        for(int i=0;i<n;i++) {
            insertNode(this->root, arr[i]);
        }

    }

    Node* insertNode(Node* &n, int d) {
        if(!n) {
            n = new Node(d);
            return n;
        }
        if(d < n->data) {
            n->left = insertNode(n->left, d);
        }
        else if(d > n->data) {
            n->right = insertNode(n->right, d);
        }
        else if(d == n->data) {
            cout << "Node already exists in BST." << endl;
        }
        return n;
    }

    void inOrderTraversal(Node* n) {
        if(n->left)
            inOrderTraversal(n->left);
        cout << n->data << " ";
        if(n->right)
            inOrderTraversal(n->right);
    }

    void preOrderTraversal(Node* n) {
        cout << n->data << " ";
        if(n->left)
            preOrderTraversal(n->left);
        if(n->right)
            preOrderTraversal(n->right);

    }

    void postOrderTraversal(Node* n) {
        if(n->left)
            postOrderTraversal(n->left);
        if(n->right)
            postOrderTraversal(n->right);
        cout << n->data << " ";
    }

    void levelOrderTraversal() {
        queue<Node*> q;
        q.push(root);
        while(!q.empty()) {
            Node* n = q.front();
            q.pop();
            cout << n->data << " ";
            if(n->left) {
                q.push(n->left);
            }
            if(n->right) {
                q.push(n->right);
            }
        }
    }

    bool search(int x) {
        Node* n = root;
        while(n) {
            if(n->data == x) return true;
            if(x<n->data) n=n->left;
            else n=n->right;
        }
        return false;
    }

};