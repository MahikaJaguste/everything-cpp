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
        while(n != nullptr) {
            cout << n->data << " ";
            n = n->next;
        }
        cout << endl;
    }

    void printBackward() {
        Node* n = head;
        if(n == nullptr) {
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