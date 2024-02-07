#include <iostream>
using namespace std;


void passByValueUpdate(int x) {
    x++;
}

void passByReferenceUpdate(int& x) {
    x++;
}

int& func(int a) {
    int num = a;
    cout << "Num = " << num << endl;
    int& ans = num;
    return ans;
}

int main() {
    int i = 5;
    int& j = i;
    cout << "i = " << i << endl;
    j++;
    cout << "i = " << i << endl;
    cout << "j = " << j << endl;
    cout << endl;


    int n = 5;
    passByValueUpdate(n);
    cout << "n = " << n << endl;
    passByReferenceUpdate(n);
    cout << "n = " << n << endl;
    cout << endl;


    // int x = func(5);
    // cout << "x = " << x; // uncertain behaviour
    // cout << endl;
    return 0;
}