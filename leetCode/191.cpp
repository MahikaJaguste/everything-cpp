#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;
    // int a = 1;

    // while(n/a) {
    //     int digit = n & a;
    //     if(digit == a) {
    //         count += 1;
    //     }
    //     a = a*2;
    // }

    while(n) {
        if(n&1) {
            count += 1;
        }
        n = n >> 1;
    }

    cout << (count) << endl;
    return 0;
}