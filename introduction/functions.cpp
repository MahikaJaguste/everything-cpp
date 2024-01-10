/*
Function is a program with a well defined task.
Can take input and return output.
Function call stack - the order in which functions are called. It also stores the local variables of each function.
Once a function returns, its local variables are destroyed.
*/
#include <iostream>
using namespace std;

bool isEven(int x) {
    return (x&1) == 0;
}

int apFunction(int n) {
    return ((3*n)+7);
}

int setBitCount(int n) {
    int answer = 0;
    while(n) {
        answer += n&1;
        n = n >> 1;
    }
    return answer;
}

int nthFibonacciNumber(int n) {
    int a1 = 0, a2 = 1;
    if(n<=1) {
        return a1;
    }
    else if(n==2){
        return a2;
    }

    for(int i=1; i<= (n-2); i++) {
        int temp = a1 + a2;
        a1 = a2;
        a2 = temp;
    }

    return a2;
}

int main() {
    int n;
    cin >> n;

    int m;
    cin >> m;

    if(isEven(n)) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }

    cout << apFunction(n) << endl;

    cout << (setBitCount(n) + setBitCount(m)) << endl;

    cout << nthFibonacciNumber(n) << endl;
}
