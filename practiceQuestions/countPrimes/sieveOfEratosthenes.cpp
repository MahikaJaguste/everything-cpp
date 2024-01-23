#include <iostream>
#include <vector>
using namespace std;

int countPrimes(int n) {
    
    vector<int> arr(n+1,1);

    // we use i*i instead of just i because the inner condition will work only when i*i < n
    // check introduction/countPrimes.cpp for even basic implementation
    for(int i=2;i*i<n;i++) {

        // if arr[i] is 0 means it is already cut out by one of its factor
        if(arr[i]) {

            // remove all multiples of the current prime number
            // we start from i because all multiples of i ie. i, 2i, 3i, ... (i-1)i would already have been cancelled
            int factor = i;
            while(i*factor<n) {
                arr[i*factor] = 0;
                factor++;
            }
        }
    }

    int count = 0;
    for(int i=2;i<n;i++) {
        count += arr[i];
    }

    return count;
}

int main() {
    int n = 40;
    cout << "Count primes till 40 using Seive method = " << countPrimes(40) << endl;
    cout << "Count primes till 5 using Seive method = " << countPrimes(5) << endl;
    cout << "Count primes till 5000000 using Seive method = " << countPrimes(5000000) << endl;

    return 0;
}