#include <iostream>
#include "Hero.cpp"
using namespace std;

class EmptyClass {

};


int main() {
    Hero h;
    cout << "Size of object with some properties = " << sizeof(h) << endl;

    EmptyClass e;
    cout << "Size of object of empty class = " << sizeof(e) << endl;

    h.setHealth(100);
    h.level = 'c';

    cout << "Health is  = " << h.getHealth() << endl;
    h.printLevel();

    Hero* h2 = new Hero;
    (*h2).setLevel('A');
    (*h2).printLevel();
    h2->setLevel('B');
    h2->printLevel();
    return 0;
}