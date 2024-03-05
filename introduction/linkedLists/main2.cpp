#include <iostream>
#include "DoublyLinkedList.cpp"
using namespace std;

int main() {

    DoublyLinkedList* ll = new DoublyLinkedList(10);
    ll->print();
    ll->printBackward();

    ll->insertAt(5,0);
    ll->printBackward();

    ll->insertAt(7,1);
    ll->printBackward();

    ll->insertAt(15,4);

    ll->insertAt(15,3);

    ll->printBackward();
    ll->print();

    cout << "Length = " << ll->getLength() << endl;

    return 0;
}