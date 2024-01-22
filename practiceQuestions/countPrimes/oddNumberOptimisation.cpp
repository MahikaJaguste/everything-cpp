#include <iostream>
#include <vector>
using namespace std;

int countPrimesOddNumOptimisation(int n) {

    if(n<=2) {
        return 0;
    }
    
    vector<int> arr(n/2 + 1,1);

    // we use i*i instead of just i because the inner condition will work only when i*i < n
    for(int i=3;i*i<n;i+=2) {

        // i/2 eg. 3 will be at index 3/2=1, 5 will be at index 5/2=2
        if(arr[i/2]) {

            // remove all multiples of the current prime number
            // we start from i because all multiples of i ie. i, 3i, 5i, ... (i-2)i would already have been cancelled
            long factor = i;
            while((i*factor) < n) {
                arr[(i*factor)/2] = 0;
                factor += 2;
            }
        }
    }

    int count = 1; // for number 2 which is the only even prime number
    for(int i=3;i<n;i+=2) {
        count += arr[i/2];
    }

    // stores only halves of odd numbers - the algorithm is a faster by some constant factors
    // also half space saved

    return count;
}

int main() {
    int n = 40;
    cout << "Count primes till 40 using Seive method = " << countPrimesOddNumOptimisation(40) << endl;
    cout << "Count primes till 5 using Seive method = " << countPrimesOddNumOptimisation(5) << endl;

    return 0;
}