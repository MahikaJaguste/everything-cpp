#include <iostream>
using namespace std;

int main() {
    
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};

    cout << "Address of arr[0] = " << &arr[0] << endl;
    cout << "Value at arr = " << arr << endl;
    
    cout << "Address of arr[1] = " << &arr[1] << endl;
    cout << "Address of arr[1] using array name = " << (arr+1) << endl;

    cout << "Value of arr[0] = " << *arr << endl;
    cout << "Value of arr[1] = " << *(arr+1) << endl;
    cout << "Value of arr[9] = " << *(arr+9) << endl;

    cout << "Value of arr[8] = " << 8[arr] << endl; // because internally it is *(8+arr)

    // cout << "Value of arr[1] = " << *(arr++) << endl;
    // this line throws error that lvalue should be modifiable

    cout << "Difference between arr and pointer in terms of size." << endl;

    cout << "Size of arr = " << sizeof(arr) << endl; // size * 4 bytes
    cout << "Size of variable being pointed to by arr ie. arr[0] = " << sizeof(*arr) << endl; // 4 bytes of int
    cout << "Size of address of arr = " << sizeof(&arr) << endl; // 8 bytes of address

    int *p = &arr[0];
    cout << "Size of pointer to first element = " << sizeof(p) << endl; // 8 bytes of address
    cout << "Size of variable being pointed to by p = " << sizeof(*p) << endl; // 4 bytes of int
    cout << "Size of address of p = " << sizeof(&p) << endl; // 8 bytes of address 
    cout << "Value of p[2] = " << p[2] << endl;

    cout << "Difference between arr and pointer in terms of & operator." << endl;

    cout << "&arr[0] = " << &arr[0] << " arr = " << arr << " &arr = " << &arr << endl;
    cout << "&arr[0] = " << &arr[0] << " p = " << p << " &p = " << &p << endl; // here &p is different, rest all are same

    int *ptr1 = &arr[0];
    int *ptr2 = &arr[8];
    cout << "Difference between pointers (it divides the size of data type) = " << ptr2 - ptr1 << endl;


    return 0;
}