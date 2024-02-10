#include <iostream>
using namespace std;

inline int getMax(int& a,int& b) {
    return (a<b) ? b : a;
}

int main() {
    int a = 1,b=2;
    cout << getMax(a,b) << endl;
    a += 5;
    b++;
    cout << getMax(a,b) << endl;
    return 0;
}