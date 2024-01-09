#include <iostream>
#include <math.h>
using namespace std;

// one's complement
int main() {
    int n;
    cin >> n;


    int answer = 0;
    int power = 0;

    if(n == 0) {
        answer = 1;
    }

    while(n) {
        int digit = n%2;
        int complementDigit = 1 - digit;
        if(complementDigit) {
            answer += int(pow(2, power)) * complementDigit;
        }
        power++;
        n = n/2;
    }

    cout << answer << endl;

    return 0;
}