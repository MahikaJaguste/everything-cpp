#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    /*
    cin does not read space, tab or new line
    */

    if (a > b) {
        cout << "a is greater than b" << endl;
    } else if (a < b) {
        cout << "a is less than b" << endl;
    } else {
        cout << "a is equal to b" << endl;
    }


    int count = 0;
    for(int i = 2; i < a; i++) {
        if (a % i == 0) {
            count++;
        }
    }
    if (count == 0) {
        cout << "Prime" << endl;
    } else {
        cout << "Not prime" << endl;
    }


    int c;
    c = cin.get(); 
    // just picks up the character,  
    //if you enter space, it will print 32 (ASCII value of space)
    // if you enter tab, it will print 9 (ASCII value of tab)
    // if you enter new line, it will print 10 (ASCII value of new line)
    // 1 is mapped to 49
    cout << c << endl;

    return 0;
}