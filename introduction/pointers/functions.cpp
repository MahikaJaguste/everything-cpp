#include <iostream>
using namespace std;

void printValue(int *ptr) {
    cout << *ptr << endl;
}

void updateValue(int *ptr) {
    (*ptr)++;
}

void printArray(int* ptr, int size) {
    for(int i=0;i<size;i++) {
        cout << ptr[i] << " ";
    }
    cout << endl;
}

void updateArray(int *ptr, int index, int newValue) {
    *(ptr+index) = newValue;
}

int getSum(int *arr, int size) {
// int getSum(int arr[], int size) this is equivalent as internally the pointer is being passed

    cout << "Size of arr = " << sizeof(arr) << endl; // will give 8 bytes of address
    int sum = 0;
    for(int i=0;i<size;i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int num = 5;
    int *p = &num;
    printValue(p);
    updateValue(p);
    printValue(p);


    int arr[5] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    p = arr;
    int sum = getSum(arr,size);
    cout << "Sum = " << sum << endl;
    int sum2 = getSum(arr+3,size-3);
    cout << "Sum2 = " << sum2 << endl;
    printArray(p, size);
    updateArray(p, 3, 100);
    printArray(p, size);

    return 0;
}