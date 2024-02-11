#include <iostream>
using namespace std;

const int BASE = 2;

int power(int n) {
    if(n==0) {
        return 1;
    }
    int lesserPower = power(n-1);
    return BASE * lesserPower;
}

// tail recursion
void printCountingDesc(int x) {
    if(x==0) {
        cout << endl;
        return;
    }
    cout << x << " ";
    printCountingDesc(x-1);
}

// head recursion
void printCountingInc(int x) {
    if(x==0) {
        return;
    }
    printCountingInc(x-1);
    cout << x << " ";
}

int main() {
    int exp;
    cin >> exp;
    cout << "Power = " << power(exp) << endl;
    printCountingDesc(exp);
    printCountingInc(exp);
    cout << endl;
    return 0;
}