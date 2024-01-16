#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for(int i=0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int arr[], int n) {
    for(int i=0; i < n-1; i++) {
        int minValue = arr[i];
        int minIndex = i;
        for(int j=i+1; j<n; j++) {
            if(arr[j]<minValue) {
                minValue = arr[j];
                minIndex = j;
            }
        }
        if(minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}

int main() {
    int n;
    cin >> n;

    int arr[10000];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    printArray(arr, n);
    selectionSort(arr, n);
    printArray(arr, n);

}