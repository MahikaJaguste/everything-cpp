#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

int main() {
    int size;
    cin >> size;

    int arr[100];
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // sort(arr, arr + size);

    // int uniqueElem;
    // for(int i = 0; i < size; i+=2) {
    //     if(i+1 >= size) {
    //         uniqueElem = arr[i];
    //         break;
    //     }
    //     if(arr[i] != arr[i+1]) {
    //         uniqueElem = arr[i];
    //         break;
    //     }
    // }

    // better solution
    int uniqueElem = arr[0];
    for(int i = 1; i < size; i++) {
        uniqueElem = uniqueElem ^ arr[i];  
    }

    cout << "Unique element is " << uniqueElem << endl;


    return 0;
}