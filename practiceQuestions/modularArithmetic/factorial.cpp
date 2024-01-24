// Compute 212! mod 10e9+7
#include <iostream>
using namespace std;

int factorial(int n) {
    long mod = 1000000007;
    long fact = 1;

    for(long i=2;i<=n;i++) {
        fact = (fact * i)%mod;
    }

    return fact;
}

int main() {
    int n = 212;
    cout << "Factorial of " << n << " = " << factorial(n) << endl;

    return 0;
}