#include <iostream>
using namespace std;

void update(int** ptr2) {
    // ptr2 = ptr2 + 1; // this will not change the value of ptr2 in main as a copy of ptr2 is passed
    // *ptr2 = *ptr2 + 1; // this will change the value stored inside ptr in main and it will point to a new location
    **ptr2 = **ptr2 + 1; // this will change the value of i in main
}

int main() {
    int i = 5;
    int* ptr = &i;
    int** ptr2 = &ptr;

    cout << "Value of i = " << i << endl;
    cout << "Value being pointed at by ptr = " << *ptr << endl;
    cout << "Value being pointed at by ptr2 and then by ptr = " << **ptr2 << endl;
    cout << endl;

    cout << "Address of i = " << &i << endl;
    cout << "Value of ptr = " << ptr << endl;
    cout << "Value being pointed at by ptr2 = " << *ptr2 << endl;
    cout << endl;
    
    cout << "Address of ptr = " << &ptr << endl;
    cout << "Value of ptr2 = " << ptr2 << endl;
    cout << endl;
    
    cout << "Address of ptr2 = " << &ptr2 << endl;
    cout << endl;
    
    cout << "Before i = " << i << endl;
    cout << "Before ptr = " << ptr << endl;
    cout << "Before ptr2 = " << ptr2 << endl;
    update(ptr2);
    cout << "After i = " << i << endl;
    cout << "After ptr = " << ptr << endl;
    cout << "After ptr2 = " << ptr2 << endl;

    return 0;
}