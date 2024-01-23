#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int findGCD(int a, int b) {
    
    while(a && b) {
        int nextA, nextB;
        if(a>b) {
            nextA = a%b;
            nextB = b;
        }
        else {
            nextA = b%a;
            nextB = a;
        }
        a = nextA;
        b = nextB;
    }

    int answer = a+b; // because one of them will be zero
    return answer;
}

int main() {
    int a = 49, b= 72;
    int answer = findGCD(a,b);
    cout << "GCD of a = " << a << " and b = " << b << " is equal to " << answer << endl;
    a = 24, b= 72;
    answer = findGCD(a,b);
    cout << "GCD of a = " << a << " and b = " << b << " is equal to " << answer << endl;
    a = 13, b= 17;
    answer = findGCD(a,b);
    cout << "GCD of a = " << a << " and b = " << b << " is equal to " << answer << endl;
    a = 1, b= 0;
    answer = findGCD(a,b);
    cout << "GCD of a = " << a << " and b = " << b << " is equal to " << answer << endl;
    a = 100, b= 30;
    answer = findGCD(a,b);
    cout << "GCD of a = " << a << " and b = " << b << " is equal to " << answer << endl;

    return 0;
}