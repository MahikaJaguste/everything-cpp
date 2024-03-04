#include <iostream>
#include "LinkedList.cpp"
using namespace std;

int main() {

    LinkedList* ll = new LinkedList(10);
    ll->print();

    ll->insertAtHead(5);
    ll->insertAtHead(4);
    ll->print();

    ll->insertAtTailv0(15);
    ll->insertAtTail(20);
    ll->insertAtTail(30);
    ll->print();

    ll->insertAt(1, 0);
    ll->print();
    ll->insertAt(35, 7);
    ll->print();
    ll->insertAt(12, 10);
    ll->insertAt(12, 4);
    ll->print();

    cout << "Head value = " << ll->head->data << endl;
    cout << "Tail value = " << ll->tail->data << endl;

    ll = new LinkedList(10);
    ll->print();
    ll->deleteAtHead();
    ll->print();
    ll->deleteAtHead();

    cout << "Head = " << ll->head << endl;
    cout << "Tail = " << ll->tail << endl;

    ll->insertAtTail(30);
    ll->print();

    cout << "Head = " << ll->head << endl;
    cout << "Tail = " << ll->tail << endl;

    ll->deleteAtTail();
    ll->print();
    ll->deleteAtTail();

    ll->insertAt(10, 1);
    ll->insertAt(10, 0);
    ll->print();

    cout << "Head = " << ll->head << endl;
    cout << "Tail = " << ll->tail << endl;


    ll->insertAt(20, 0);
    ll->print();

    cout << "Head = " << ll->head << endl;
    cout << "Tail = " << ll->tail << endl;

    ll->deleteNodeAt(2);
    
    ll->deleteNodeAt(1);
    ll->print();

    ll->deleteNodeAt(3);

    ll->deleteNodeAt(0);
    ll->print();

    ll->deleteNodeAt(5);

    ll->insertAtTail(1);
    ll->insertAtTail(2);
    ll->insertAtTail(3);
    ll->insertAtTail(4);
    ll->insertAtTail(5);
    ll->print();
    ll->deleteNodeAt(3);
    ll->print();
    ll->deleteNodeAt(4);



    return 0;
}