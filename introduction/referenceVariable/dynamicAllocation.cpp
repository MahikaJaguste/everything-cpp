#include <iostream>
using namespace std;

int main() {
    char* ch = new char;
    *ch = 'a';
    cout << "ch = " << ch << endl;

    int* arr = new int[5];
    *arr = 1;
    *(arr+1) = 2;
    for(int i=0;i<5;i++) {
        cout << *(arr+i) << " ";
    }
    cout << endl;

    int n;
    cin >> n;

    int* a = new int[n];
    for(int i=0;i<n;i++) {
        cout << *(a+i) << " ";
    }
    cout << endl;

    return 0;
}