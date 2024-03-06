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

class DoublyLinkedList {
    public:
    Node* head;

    DoublyLinkedList(int data) {
        Node* n = new Node(data);
        this->head = n;
    }

    void insertAt(int data, int index) {
        if(index == 0) {
            // insert at head
            Node* n = new Node(data);
            if(this->head == nullptr) {
                this->head = n;
                return;
            }
            n->next = this->head;
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
        while(temp->next != nullptr && count<index) {
            temp = temp->next;
            count++;
        }

        if(count != index) {
            cout << "Invalid insertion index." << endl;
            return;
        }

        Node* n = new Node(data);

        if(temp->next == nullptr) {
            // insert at tail
            temp->next = n;
            n->prev = temp;
            return;
        }

        temp->next->prev = n;
        n->next = temp->next;
        n->prev = temp;
        temp->next = n;
    }

    void deleteAt(int index) {
        if(this->head == nullptr) {
            cout << "Linked list is already empty." << endl;
            return;
        }

        // delete at head
        if(index == 0) {
            Node* temp = this->head;
            if(this->head->next != nullptr) {
                this->head->next->prev = nullptr;
            }
            this->head = this->head->next;
            delete temp;
            return;
        }

        Node* temp = this->head;        
        int count = 1;
        while(temp->next != nullptr && count < index) {
            temp = temp->next;
            count++;
        }

        if(count != index) {
            cout << "Invalid deletion index." << endl;
            return;
        }

        if(temp->next->next == nullptr) { // delete at tail
            delete temp->next;
            temp->next = nullptr;
            return;
        }

        temp->next->next->prev = temp;
        Node* t = temp->next;
        temp->next = temp->next->next;
        delete t;
    }
    
    
    int getLength() {
        Node* n = head;
        int count = 0;
        while(n != nullptr) {
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
        while(n != nullptr) {
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
        while(n->next != nullptr) {
            n = n->next;
        }
        while(n != nullptr) {
            cout << n->data << " ";
            n = n-> prev;
        }
        cout << endl;
    }
};