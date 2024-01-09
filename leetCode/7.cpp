#include <iostream>
using namespace std;

// reverse integer
int main() {
    int x;
    cin >> x;

    int answer = 0;

    while(x) {
        int digit = x%10;
        if((answer > INT_MAX/10) || (answer < INT_MIN/10)) {
            answer = 0;
            break;
        }
        answer = 10 * answer + digit;
        x = x/10;
    }

    cout << answer << endl;


    /*
    negative modulo positive gives negative remainder - truncate division
    */
    return 0;
}