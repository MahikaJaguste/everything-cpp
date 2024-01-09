#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    if(n <= 0) {
        return false;
    }

    int count = 0;
    while(n) {
        count += n&1;
        n = n >> 1;
    }

    if(count == 1) {
        return true;
    }

    return false;
}

int main() {
    int n;
    cin >> n;

    bool answer = isPowerOfTwo(n);
    cout << answer << endl;

    return 0;
}