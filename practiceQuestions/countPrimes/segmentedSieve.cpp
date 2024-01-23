#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

void simpleSieve(int limit, vector<int>& primes) {
    // just storing all prices which are less than sqrt(n)
    vector<int> arr(limit + 1,1);
    for(int i=2;i*i<limit;i++) {
        if(arr[i]) {
            int factor = i;
            while(i*factor<limit) {
                arr[i*factor] = 0;
                factor++;
            }
        }
    }

    for(int i=2;i<limit;i++) {
        if(arr[i]) {
            primes.push_back(i);
        }
    }
}

int countPrimes(int n) {
    int limit = ceil(sqrt(n));
    vector<int> primes;
    primes.reserve(limit);
    
    simpleSieve(limit, primes);

    int count = primes.size();

    int start = limit; // inclusive
    int end = limit * 2; // exclusive

    while(start < n) { // starting can max be n-1, beyond that it lies out of range [0, n-1]

        if(end > n) { // if end goes beyond n, restrict it to n (exclusive)
            end = n;
        }

        vector<int> arr(limit,1); // need an array only to hold [start, end-1] eg. [limit+0, limit+1, ... limit+(limit-1)]
        for(int k=0; k < primes.size(); k++) {
            int p = primes[k];
            int factor = ceil(1.0*start/p); // if start = 7 and p = 2, we want to start with 2*4=8
            while((factor * p) < end) {
                arr[factor*p - start] = 0;
                factor++;
            }
        }

        for(int i=0;i<(end-start);i++) {
            if(arr[i]) {
                // count primes in this range
                count += 1;
            }
        }

        // move to the next segment
        start += limit;
        end += limit;

    }

    return count;
}

int main() {
    int answer = countPrimes(40);
    cout << "Count primes till 40 using Seive method = " << answer << endl;
    answer = countPrimes(5);
    cout << "Count primes till 5 using Seive method = " << answer << endl;
    answer = countPrimes(0);
    cout << "Count primes till 0 using Seive method = " << answer << endl;
    answer = countPrimes(1);
    cout << "Count primes till 1 using Seive method = " << answer << endl;
    answer = countPrimes(2);
    cout << "Count primes till 2 using Seive method = " << answer << endl;
    answer = countPrimes(10);
    cout << "Count primes till 10 using Seive method = " << answer << endl;
    answer = countPrimes(5000000);
    cout << "Count primes till 5*10^6 using Seive method = " << answer << endl;

    return 0;
}