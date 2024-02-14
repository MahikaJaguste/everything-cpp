#include <iostream>
using namespace std;

int binarySearch(int *arr, int n, int key, int start, int end) {
    if(start > end) {
        return -1;
    }

    int mid = start + (end-start)/2;

    if(arr[mid] == key) {
        return mid;
    }
    else if(arr[mid] > key) {
        return binarySearch(arr, n, key, start, mid-1);
    }
    else {
        return binarySearch(arr, n, key, mid+1, end);
    }
}



int main() {
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    //  int arr[] = {0, 1, 2, 3, 4};
    // int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    cin >> key;
    int index = binarySearch(arr, n, key, 0, n-1);
    cout << "Index: " << index << endl;
    return 0;
}