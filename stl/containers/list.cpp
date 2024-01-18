#include <iostream>
#include <list>
using namespace std;

/*

Implemented using doubly linked list
There are two pointers: front and back
Direct access is not possible, have to traverse elements to reach required position


*/

int main() {
    
    list<int> l;

    l.push_back(1);
    l.push_front(2);

    for(int i: l) {
        cout << i << " ";
    }
    cout << endl;

    // begin, end, front, back, empty, pop_front, pop_back : all these exist with O(1)
    // erase is O(n) as we have to go delete each element

    l.erase(l.begin());
    cout << "After erase:" << endl;
    for(int i: l) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Size of list: " << l.size() << endl;

    list<int> copyList(l);
    list<int> n(100, 5);
    cout << "Size of list: " << n.size() << endl;

    
    return 0;

}