#include <iostream>
using namespace std;

int sumNumbers(int *arr, int n) {
    if(n==1) {
        return arr[0];
    }
    return arr[0] + sumNumbers(arr+1, n-1);
}



int main() {
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    //  int arr[] = {0, 1, 2, 3, 4};
    // int n = sizeof(arr)/sizeof(arr[0]);
    int sum = sumNumbers(arr, n);
    cout << "Sum: " << sum << endl;
    return 0;
}