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


    cout << "Address of h = " << &h << endl;
    int health = h.getHealth();
    cout << "Health is  = " << health << endl;
    h.print();

    Hero* h2 = new Hero;
    (*h2).setLevel('A');
    (*h2).print();
    h2->setLevel('B');
    h2->print();

    Hero h3(4);
    cout << "Address of h3 = " << &h3 << endl;
    int newHealth = h3.getHealth();
    h3.setLevel('A');
    cout << "New health set in constructor = " << newHealth << endl;

    Hero h4(h3);
    h4.print();


    return 0;
}