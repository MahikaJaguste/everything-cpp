#include <iostream>
#include "Heap.cpp"
using namespace std;

int main() {

    int arr[] = {5, 3, 2, 4, 7, 6, 6, 8};
    int n = sizeof(arr)/sizeof(arr[0]);

    Heap* h = new Heap();
    h->deleteRoot();

    h->insert(20);
    h->print();
    h->deleteRoot();
    h->print();

    h->insert(20);
    h->insert(50);
    h->insert(40);
    h->insert(30);
    h->insert(60);

    h->print();
    h->deleteRoot();
    h->print();

    int brr[] = {-1, 200, 300, 400, 100, 500};
    h->heapify(brr, sizeof(brr)/sizeof(brr[0])-1);
    for(int i=1; i<sizeof(brr)/sizeof(brr[0]); i++) {
        cout << brr[i] << " ";
    }
    cout << endl;
      
    return 0;
}
