#include <iostream>
using namespace std;

void dummy(int n) {
    n++;
    cout << "n inside dummy: " << n << endl;
}

int main() {
    int n = 5;

    dummy(n);

    cout << "n inside main: " << n << endl;

    return 0;
}

/*
The n variables copy is passed to the dummy function whose scope is limited to the dummy function.
The n variable inside the main function is not affected by the dummy function.
*/