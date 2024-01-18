#include <iostream>
#include <deque>
using namespace std;

/*
Can push and pop both at front and back
It's implementation is NOT contiguous memory allocation. There are multiple fixed static arrays and tracking is maintained about where your static arrays are present.
Again, it is dynamic - we can increase its size on the fly.
*/

int main() {
    
    // new vector of size 0 is created
    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    d.push_front(3);

    for(int i: d) {
        cout << i << " ";
    }
    cout << endl;

    d.pop_back();
    for(int i: d) {
        cout << i << " ";
    }
    cout << endl;

    d.pop_front();
    for(int i: d) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Element at 0th index: " << d.at(0) << endl;

    d.push_back(100);

    cout << "First element: " << d.front() << endl;
    cout << "Last element: " << d.back() << endl;

    cout << "Size before erase: " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "Size after erase: " << d.size() << endl;

    // size reduces but the max size (similar to capacity) remains the same

    return 0;

}