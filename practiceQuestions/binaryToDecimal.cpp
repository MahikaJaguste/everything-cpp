#include <iostream>
#include <math.h>
using namespace std;

int main() {
    long n;
    cin >> n;

    long answer = 0;
    int power = 0;
    while(n) {
        int digit = n%10;
        answer += long(pow(2, power)) * digit;
        n = n/10;
        power++;
    }

    cout << answer << endl;

    return 0;
}