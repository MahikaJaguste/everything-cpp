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

    for(int i=0; i < size-1; i+=2) {
        swap(arr[i], arr[i+1]);
    }

    printArray(arr, size);

    return 0;
}