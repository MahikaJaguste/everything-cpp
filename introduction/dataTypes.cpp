/*
To store any data in a variable, we need to declare it with a data type and specify its memory size.
*/
#include <iostream>
using namespace std;

int main() {
    int a = 5;
    // int is 4 bytes = 32 bits

    char ch = 'a'; // according to ASCII, 'a' is 97 which is stored in 8 bits
    // char is 1 byte = 8 bits

    bool b = true;
    // bool is 1 bit

    float f = 1.2;
    // float is 4 bytes = 32 bits

    double d = 1.2;
    // double is 8 bytes = 64 bits, double precision

    cout << "Size of int: " << sizeof(a) << endl;
    cout << "Size of char: " << sizeof(ch) << endl;
    cout << "Size of bool: " << sizeof(b) << endl;
    cout << "Size of float: " << sizeof(f) << endl;
    cout << "Size of double: " << sizeof(d) << endl;
    // returns the size of the data type in bytes

    /*
    Type casting
    */
    int x = 'a';
    cout << x << endl; // prints 97

    char y = 98;
    cout << y << endl; // prints b
    // if the number is larger than what 1 byte can store, it will take the last 8 bits and store that only

    /*
    Unsigned int
    */
    unsigned int z = 2;
    // takes 4 bytes only, but the range is 0 to 2^32 - 1
    cout << "Size of unsigned int: " << sizeof(z) << endl;

    unsigned int z1 = -112;
    cout << z1 << endl; // prints 4294967184, as the 2's complement of -112 is 4294967184 which is treated as unsigned int

    return 0;
}

