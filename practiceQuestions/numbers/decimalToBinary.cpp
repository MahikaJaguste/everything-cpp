#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int answer[32] = {0};
    int len = sizeof(answer) / sizeof(int);

    int power = 0;
    while(n) {
        int digit = n&1;
        n = n >> 1;
        answer[power] = digit;
        power++;
        if(power > len - 1) {
            break;
        }
    }
    for(int i = len - 1; i >= 0; i--) {
        cout << answer[i];
    }
    cout << endl;

    return 0;
}