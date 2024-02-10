#include <iostream>
using namespace std;

void print(int *arr, int n, int start = 0) {
    for(int i=start;i<n;i++) {
        cout << arr[i] << " " << endl;
    }
}

int main() {
    int arr[5] = {1,2,3,4,5};
    cout << "Printing from start = 2" << endl;
    print(arr,5,2);
    cout << "Printing from start = 0" << endl;
    print(arr,5);
    return 0;
}