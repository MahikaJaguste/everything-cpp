#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n) {
    if(n<2){
        return false;
    }

    for(int i=2;i<n;i++) {
        if(n%i==0){
            return false;
        }
    }

    return true;
}

int countPrimes(int n) {
    
    int count = 0;
    vector<int> arr(n+1,1);
    for(int i=2;i<n;i++) {
        // if arr[i] is 0 means it is already cut out by one of its factor
        if(arr[i]) {
            count++;
            // remove all multiples of the current prime number
            // we start from i because all multiples of i ie. i, 2i, 3i, ... (i-1)i would already have been cancelled
            long factor = i;
            while(i*factor<n) {
                arr[i*factor] = 0;
                factor++;
            }
        }
    }
    return count;
}

int main() {
    int n = 40;
    
    if (isPrime(n)) {
        cout << "Prime" << endl;
    } else {
        cout << "Not prime" << endl;
    }

    cout << "Count primes using Seive method = " << countPrimes(n) << endl;

    return 0;
}