#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for(int i=0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int n) {
    // for(int i=0; i < n; i++) {
    //     for(int j=0; j<n-1; j++) {
    //         if(arr[j] > arr[j+1]) {
    //             swap(arr[j], arr[j+1]);
    //         }
    //     }
    // }

    // n-1 because when only one element is left in the front, it is already at correct place
    bool isSwapped = true; // when array becomes sorted in any itermediate pass or even in 0th pass (already sorted)
    for(int i=0; i < n-1 && isSwapped; i++) {
        // -i because the last i elements are in correct place
        // -1 as we are doing j+1 inside
        isSwapped = false;
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                isSwapped = true;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    printArray(arr, n);
    bubbleSort(arr, n);
    printArray(arr, n);

}