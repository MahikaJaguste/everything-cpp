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

class BinaryTree {
    public:
    Node* root;

    BinaryTree() {
        this->root = new Node(0);
        root->left = new Node(1);
        root->right = new Node(2);
        root->left->left = new Node(3);
        root->left->right = new Node(4);
        root->right->left = new Node(5);
        root->right->right = new Node(6);
    }

    // BinaryTree() {
    //     this->root = buildTree();
    // }

    Node* buildTree() {
        int x;
        cout << "Enter data for node: " << endl;
        cin >> x;
        if(x == -1) {
            return NULL;
        }
        Node* n = new Node(x);
        cout << "Enter data for left of " << x << ": " << endl;
        n->left = buildTree();
        cout << "Enter data for right of " << x << ": " << endl;
        n->right = buildTree();
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

};