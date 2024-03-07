#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data) {
        this->data = data;
        this->prev = nullptr;
        this->next = nullptr;
    }
};

class CircularDoublyLinkedList {
    public:
    Node* head;

    CircularDoublyLinkedList(int data) {
        Node* n = new Node(data);
        this->head = n;
        n->prev = n;
        n->next = n;
    }

    void insertAt(int data, int index) {
        int len = this->getLength();
        if(index > len) {
            cout << "Index exceeds length." << endl;
            return;
        }

        if(index == 0) {
            // insert at head
            Node* n = new Node(data);

            if(this->head == nullptr) {
                this->head = n;
                n->next = n;
                n->prev = n;
                return;
            }
            
            n->next = this->head;
            n->prev = this->head->prev;
            this->head->prev->next = n;
            this->head->prev = n;
            this->head = n;
            return;
        }

        if(this->head == nullptr) { // and index is not 0
            cout << "Invalid insert index." << endl;
            return;
        }

        Node* temp = this->head;
        int count = 1;
        while(count<index) {
            temp = temp->next;
            count++;
        }

        Node* n = new Node(data);
        n->prev = temp;
        n->next = temp->next;
        temp->next->prev = n;
        temp->next = n;
    }

    void deleteAt(int index) {
        if(this->head == nullptr) {
            cout << "Linked list is already empty." << endl;
            return;
        }

        int len = this->getLength();
        if(index >= len) {
            cout << "Index exceeds length." << endl;
            return;
        }

        // delete at head
        if(index == 0) {
            Node* temp = this->head;

            if(this->head->next == this->head) { // only one element
                this->head = nullptr;
                delete temp;
                return;
            }

            Node* lastNode = this->head->prev;
            Node* newFirstNode = this->head->next;
            lastNode->next = newFirstNode;
            newFirstNode->prev = lastNode;
            this->head = newFirstNode;
            delete temp;
            return;
        }

        Node* temp = this->head;        
        int count = 1;
        while(count < index) {
            temp = temp->next;
            count++;
        }

        Node* toBeDeleted = temp->next;
        temp->next->next->prev = temp;
        temp->next = temp->next->next;
        delete toBeDeleted;
    }
    
    
    int getLength() {
        Node* n = this->head;
        if(this->head == nullptr) {
            return 0;
        }
        int count = 1;
        while(n->next != head) {
            count++;
            n = n->next;
        }
        return count;
    }

    void print() {
        Node* n = head;
        if(n == nullptr) {
            cout << "Nothing to print." << endl;
            return;
        }

        cout << this->head->data << " ";
        n = n->next;
        while(n != head) {
            cout << n->data << " ";
            n = n->next;
        }
        cout << endl;
    }

    void printBackward() {
        Node* n = head;
        if(n == nullptr) {
            cout << "Nothing to print." << endl;
            return;
        }

        n = n->prev;
        Node* end = n;
        cout << n->data << " ";
        n = n->prev;
        while(n != end) {
            cout << n->data << " ";
            n = n->prev;
        }
        cout << endl;
    }
};