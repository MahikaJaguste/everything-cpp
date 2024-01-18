
#include <iostream>
#include <vector>
using namespace std;

/*
* Vector is a dynamic array.
* Once the size of the vector is occupied, it creates a new vector double the size of the current vector.
* It copies the elements of the current vector to the new vector and dumps the old vector.
* It can also decrease its size if we call shrink_to_fit() function.
*/
int main() {
    
    // new vector of size 0 is created
    vector<int> v;

    // size gives how many elements it contains
    // capacity gives how many elements it can contain
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    // push_back() adds element at the end of the vector
    v.push_back(1);
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    v.push_back(2);
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    v.push_back(3);
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    // gives capacity 4 as it doubles the size of the vector after 2 elements are already occupied


    cout << "First element: " << v.front() << endl;
    cout << "Element at index 1: " << v.at(1) << endl;
    cout << "Last element: " << v.back() << endl;

    // pop_back() removes the last element
    v.pop_back();
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    cout << "Printing till v.size" << endl;
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << endl;
    }
    /* 
    1
    2
    */

    // another way to print
    cout << "Printing till v.size using iterator" << endl;
    for(int i: v) {
        cout << i << endl;
    }

    // another way to print
    cout << "Printing till v.size using iterator" << endl;
    // begin and end give pointers to the first and last element of the vector
    for (auto it = v.begin(); it != v.end(); ++it)
        cout  << *it << endl;

    cout << "Printing till v.capacity" << endl;
    for(int i=0; i<v.capacity(); i++) {
        cout << v[i] << endl;
    }
    /*
    1
    2
    3
    0
    */
   // This means the pop_back() function does not delete the element, it just reduces the size of the vector.

    // clear() removes all elements
    // the size becomes 0 but the capacity remains the same
    v.clear();

    // if we know size beforehand and want to populate vector with same value other than the default 0
    vector<int> v1(5, 10);
    // 5 is the size and 10 is the value

    // to copy one vector to another
    vector<int> v2(v1);

    // assign() assigns new values to the vector
    v.assign(5, 10);

    cout << "v.capacity after assign: " << v.capacity() << endl;

    cout << "Printing till v.capacity after assign" << endl;
    for(int i=0; i<v.capacity(); i++) {
        cout << v[i] << endl;
    }

    // // erase() removes element at a particular position
    // v.erase(v.end());

    // // insert() inserts element at a particular position
    // v.insert(v.begin(), 5);


    // cout << "Printing till v.capacity after insert and erase" << endl;
    // for(int i=0; i<v.capacity(); i++) {
    //     cout << v[i] << endl;
    // }

    // // empty() checks if vector is empty
    // cout << "Is vector empty: " << v.empty() << endl;

    // // resize() changes the size of the vector
    // v.resize(5);

    // // shrink_to_fit() reduces the capacity of the vector to its size
    // v.shrink_to_fit();

    // cout << "Size: " << v.size() << endl;
    // cout << "Capacity: " << v.capacity() << endl;
    

    return 0;
}