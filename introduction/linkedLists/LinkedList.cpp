#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};


class LinkedList {
    public:
    Node* head;
    Node* tail;

    LinkedList(int d) {
        Node* n = new Node(d);
        this->head = n;
        this->tail = n;
    }

    void insertAtHead(int d) {
        Node* n = new Node(d);
        n->next = this->head;
        this->head = n;
        if(this->tail == nullptr) {
            this->tail = n;
        }
    }

    void insertAtTailv0(int d) {
        if(this->head == nullptr) {
            insertAtHead(d);
            return;
        }

        Node* temp = head;
        while(temp->next != nullptr) {
            temp = temp->next;
        }
        Node* n = new Node(d);
        temp->next = n;
        this->tail = n;
    }

    void insertAtTail(int d) {
        if(this->head == nullptr) {
            insertAtHead(d);
            return;
        }

        Node* n = new Node(d);
        this->tail->next = n;
        this->tail = n;
    }

    void insertAt(int d, int index) {
        // insert at first position
        if(index == 0) {
            this->insertAtHead(d);
            return;
        }

        if(this->head == nullptr && index != 0) {
            cout << "Invalid insertion index." << endl;
            return;
        }

        Node* temp = head;
        int count = 1;
        while(temp->next != nullptr && count < index) {
            temp = temp->next;
            count++;
        }

        // index out of bounds
        if(count != index) {
            cout << "Invalid insertion index." << endl;
            return;
        }

        // insert at last position
        if(temp->next == nullptr) {
            this->insertAtTail(d);
            return;
        }

        Node* n = new Node(d);
        n->next = temp->next;
        temp->next = n;
    }

    void deleteAtHead() {
        if(this->head == nullptr) {
            cout << "Linked list is already empty." << endl;
            return;
        }
        Node* temp = this->head;
        if(temp->next == nullptr) {
            this->tail = nullptr;
        }
        this->head = this->head->next;
        delete temp;
    }

    void deleteAtTail() {
        if(this->head == nullptr) {
            cout << "Linked list is already empty." << endl;
            return;
        }
        if(this->head->next == nullptr) {
            this->deleteAtHead();
            return;
        }
        Node* temp = this->head;
        while(temp->next->next != nullptr) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
        this->tail = temp;
    }


    void deleteNodeAt(int index) {
        if(this->head == nullptr) {
            cout << "Linked list is already empty." << endl;
            return;
        }

        // delete at first position
        if(index == 0) {
            this->deleteAtHead();
            return;
        }

        if(this->head->next == nullptr && index != 0) {
            cout << "Invalid deletion index." << endl;
            return;
        }

        Node* temp = head;
        int count = 1;
        while(temp->next->next != nullptr && count < index) {
            temp = temp->next;
            count++;
        }

        // index out of bounds
        if(count != index) {
            cout << "Invalid deletion index." << endl;
            return;
        }

        // delete at last position
        if(temp->next->next == nullptr) {
            this->deleteAtTail();
            return;
        }

        Node* toBeDeleted = temp->next;
        temp->next = temp->next->next;
        delete toBeDeleted;
    }

    void print() {
        Node* n = head;
        while(n != nullptr) {
            cout << n->data << " ";
            n = n->next;
        }
        cout << endl;
    }
};
