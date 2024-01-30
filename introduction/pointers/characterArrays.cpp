#include <iostream>
using namespace std;

int main() {
    
    int arr[5] = {0,1,2,3,4};
    char ch[6] = "abcde"; // ends with null character

    cout << "arr = " << arr << endl;
    cout << "ch = " << ch << endl;

    char *c = &ch[0];
    cout << "Value of c = " << c << endl;
    cout << "Address of c = " << &c << endl;
    cout << "Value of variable being pointed to by c = " << *c << endl;
    
    char *c1 = ch;
    cout << "Value of c1 = " << c1 << endl;
    cout << "Address of c1 = " << &c1 << endl;
    cout << "Value of variable being pointed to by c1 = " << *c1 << endl;

    char *c2 = ch + 1;
    cout << "Value of c2 = " << c2 << endl;
    cout << "Address of c2 = " << &c2 << endl;
    cout << "Value of variable being pointed to by c2 = " << *c2 << endl;
    cout << "Value at c2[2] = " << c2[2] << endl;
    
    char temp = 'z';
    char *p = &temp;
    cout << "Value of p (will print the characters till null character is found) = " << p << endl;



    return 0;
}