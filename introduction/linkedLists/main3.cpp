#include <iostream>
#include "CircularDoublyLinkedList.cpp"
using namespace std;

int main() {

    CircularDoublyLinkedList* ll = new CircularDoublyLinkedList(10);
    ll->print();
    ll->printBackward();

    cout << "Length = " << ll->getLength() << endl;

    ll->insertAt(5,0);
    ll->printBackward();
    ll->print();

    cout << "Length = " << ll->getLength() << endl;

    ll->insertAt(4,0);
    ll->printBackward();
    ll->print();

    cout << "Length = " << ll->getLength() << endl;

    ll->insertAt(7,2);
    ll->printBackward();
    ll->print();

    ll->insertAt(15,4);
    ll->printBackward();
    ll->print();

    ll->insertAt(20,6);

    ll->insertAt(8,3);
    ll->printBackward();
    ll->print();

    cout << "Length = " << ll->getLength() << endl;

    ll->deleteAt(2);
    ll->printBackward();
    ll->print();

    ll->deleteAt(5);

    ll->deleteAt(0);
    ll->printBackward();
    ll->print();

    ll->deleteAt(3);
    ll->printBackward();
    ll->print();

    ll->deleteAt(0);
    ll->printBackward();
    ll->print();

    ll->deleteAt(2);

    ll->deleteAt(1);
    ll->printBackward();
    ll->print();

    ll->deleteAt(4);

    ll->deleteAt(0);
    ll->printBackward();
    ll->print();

    ll->deleteAt(1);

    cout << "Length = " << ll->getLength() << endl;

    ll->insertAt(20, 1);

    ll->insertAt(20, 0);
    ll->printBackward();
    ll->print();

    ll->insertAt(15, 0);
    ll->printBackward();
    ll->print();

    cout << "Length = " << ll->getLength() << endl;

    return 0;
}