#include <iostream>
#include <queue>
using namespace std;

class Heap {
    public:
    int arr[100];
    int size;

    Heap() {
        size = 0;
    }

    void insert(int x) {
        size++;
        int index = size;
        arr[index] = x;
        while(index/2 >= 1) {
            if(arr[index]>arr[index/2]) {
                swap(arr[index], arr[index/2]);
                index = index/2;
                continue;
            }
            break;
        }
    }

    void print() {
        if(!size) cout << "Heap is empty.";
        for(int i=1;i<=size;i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void deleteRoot() {
        if(size < 1) {
            cout << "No element to delete." << endl;
            return;
        }
        cout << "Deleting root node." << endl;

        if(size==1) {
            size--;
            return;
        }
        arr[1] = arr[size];
        size--;
        if(!size) return; // only one element to delete

        int index = 1;
        while(2*index <= size) {
            if(2*index +1 <= size) {
                if(arr[2*index] > arr[2*index+1]) {
                    if(arr[index] < arr[2*index]) {
                        swap(arr[index], arr[2*index]);
                        index = 2*index;
                        continue;
                    }
                    break;
                }
                else {
                    if(arr[index] < arr[2*index+1]) {
                        swap(arr[index], arr[2*index+1]);
                        index = 2*index+1;
                        continue;
                    }
                    break;
                }
            }
            else {
                if(arr[index] < arr[2*index]) {
                    swap(arr[index], arr[2*index]);
                    index = 2*index;
                    continue;
                }
                break;
            }
        }
    }

};