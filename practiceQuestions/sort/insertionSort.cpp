#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for(int i=0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[], int n) {
    // i=0 is not needed, because it is the first element
    // which is already in the correct place if we consider only the first element to be part of the sorted array
    for(int i=1;i<n;i++) {
        int currentValue = arr[i];
        int j;
        for(j=i-1; j>=0; j--) {
            // keep right shifting till we find the correct position for the current number
            if(arr[j] > currentValue) {
                arr[j+1] = arr[j];
            }
            else {
                break;
            }
        }
        arr[j + 1] = currentValue;
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
    insertionSort(arr, n);
    printArray(arr, n);

}