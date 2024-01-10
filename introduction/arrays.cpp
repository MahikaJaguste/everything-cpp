/*
It is a type of list to store homogeneous data (same data type). It is a contiguous block of memory.
The name of the array points to the location of the first element of the array.
*/

#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    for(int i=0; i < (size/2); i++) {
        int j = size -1 -i;
        swap(arr[i], arr[j]);
    }
}

void printArray(int arr[], int size) {
    for(int i=0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[10000] = {1,2,3};
    // This causes all remaining elements to be initialized to 0.
    // cout << arr[9999] << endl;

    int len = sizeof(arr)/sizeof(arr[0]);
    // cout << "Length of array: " << len << endl;

    int ar[3];
    fill_n(ar,3,45);
    for (int i = 0; i <= 3; i++)
    {
        // cout << ar[i] << endl;
        /* 
        Accessing out-of-bounds Array Index may cause a segmentation fault or other undefined behavior (Garbage value).
        There is no boundary checking for arrays in C and C++
        */
    }
    // cout << ar << endl; // this prints the address of the first element of the array

    char ch[5] = {'a','b','c','d','e'};
    // cout << ch << endl; // this works for char array only

    int size;
    cin >> size;

    int num[100];
    int sum = 0;
    for(int i=0; i<size; i++) {
        cin >> num[i];
        sum += num[i];
    }

    cout << "Sum: " << sum << endl;

    int numToSearch;
    cout << "Enter number to search: ";
    cin >> numToSearch;

    bool isPresent = false;
    for(int i=0; i<size; i++) {
        if(num[i] == numToSearch) {
            isPresent = true;
            break;
        }
    }

    if(isPresent) {
        cout << "Present" << endl;
    } else {
        cout << "Not Present" << endl;
    }

    reverseArray(num, size);
    printArray(num, size);



    return 0;
}