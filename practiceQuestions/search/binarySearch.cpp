#include <iostream>
using namespace std;

int binarySearch(int *arr, int n, int key) {

    int start = 0;
    int end = n-1;
    int index = -1;

    while(start <= end) {

        // int mid = (start+end)/2; 
        /* 
        Avoid the above way as if start and end both are large, the sum will go out of range of int 
        if start is (2^32 - 1) and end is (2^32 - 1), the sum goes out of range
        */

        int mid = start + (end-start)/2;

        // cout << start << " " << end << " " << mid << endl;
        if(arr[mid] == key) {
            index = mid;
            break;
        }
        else if(arr[mid] > key) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    
    return index;
}



int main() {
    // int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int n = sizeof(arr)/sizeof(arr[0]);
     int arr[] = {0, 1, 2, 3, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    cin >> key;
    int index = binarySearch(arr, n, key);
    cout << "Index: " << index << endl;
    return 0;
}