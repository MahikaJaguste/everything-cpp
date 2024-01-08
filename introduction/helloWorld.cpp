#include <iostream>
// This file contains code where cout's definition is present.
using namespace std;
// This is a directive which tells the compiler that we are using the std namespace.


int main() {
    /*
    This is the starting point of the program.
    */
    cout << "Hello, World!" << endl;
    // cout is an instance of a class called ostream, not a function
    // overloaded operator << to insert output into the stream (ie. to write to standard output)
    // endl is new line or enter, same as '\n' (new line character which is mapped as enter)
    // ; is used to end a statement
    return 0;
}