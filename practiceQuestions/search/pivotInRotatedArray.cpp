#include <iostream>
using namespace std;

int pivotSearch(int *arr, int n) {

    int start = 0;
    int end = n-1;
    int mid;

    while(start <= end) {

        // int mid = (start+end)/2; 
        /* 
        Avoid the above way as if start and end both are large, the sum will go out of range of int 
        if start is (2^32 - 1) and end is (2^32 - 1), the sum goes out of range
        */

        mid = start + (end-start)/2;

        // cout << start << " " << end << " " << mid << endl;
        if(arr[mid] >= arr[0]) {
            start = mid + 1;
        }
        else {
            end = mid;
            if(arr[mid-1] > arr[mid]){
                break;
            }
        }
    }
    
    return mid;
}



int main() {
    int arr[] = {7, 8, 9, 0, 1, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int index = pivotSearch(arr, n);
    cout << "Index: " << index << endl;
    return 0;
}