#include <iostream>
using namespace std;

int main() {

    int a1 = 0;
    int a2 = 1;
    cout << a1 << " " << a2 << " ";
    
    int n = 10;
    for(int i=0; i<n; i++) {
        int temp = a1;
        a1 = a2;
        a2 = temp + a2;
        cout << a2 << " ";
    }

    cout << endl;
    return 0;
}