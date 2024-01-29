#include <iostream>
using namespace std;

int main() {
    int num = 5;
    cout << "Value of num = " << num << endl;

    // address operator
    cout << "Address at which num is stored = " << &num << endl;

    int *ptr = &num;
    cout << "Value at ptr = " << ptr << endl;

    // dereference operator
    cout << "Value which is being pointed at by ptr = " << *ptr << endl;

    cout << "Size of num = " << sizeof(num) << endl;
    cout << "Size of pointer = " << sizeof(ptr) << endl; // usually 8-byte addresses in most systems
    // this size is irrespective of the data type being pointed to by the pointer as the size of address is same

    double d = 4.3;
    double *p2 = &d;

    cout << "Size of d = " << sizeof(d) << endl;
    cout << "Size of pointer = " << sizeof(p2) << endl; // still 8 only

    int *p = 0;
    // cout << *p << endl; 
    // the above line gives seg fault as we made a pointer to memory address 0 which is equivalent to null 
    // and then trying to deference a pointer to a null memory location which does not exist
    p = &num;
    // note that syntax does not include *p here
    cout << "Value at p = " << p << endl;
    cout << "Value which is being pointed at by p = " << *p << endl;

    int a = num;
    a++;
    cout << "Num remains same: num = " << num << endl;
    (*p)++; // first dereference and then increment
    // same as writing 
    // *p = (*p) + 1;
    cout << "Num increases when updated via pointer: num = " << num << endl;
    *p = (*p) * 100;
    cout << "Num changes when updated via pointer: num = " << num << endl;

    // copying pointer p to another pointer
    // the address of num gets stored in q as well
    int *q = p;
    cout << "Value at q = " << q << endl;
    cout << "Value which is being pointed at by q = " << *q << endl;

    // precedence of Prefix ++ (or Prefix –) has same priority than dereference (*) operator, 
    // and precedence of Postfix ++ (or Postfix –) is higher than both Prefix ++ and *

    // *p++ is equivalent to *(p++) 
    // and ++*p is equivalent to ++(*p) 

    // both Prefix ++ and * are right associative
    cout << "(*p)++ = " << (*p)++ << " and now *p = " << *p << endl;
    cout << "*(p+1) = " << *(p+1) << endl; 
    cout << "p = " << p << " and *p = " << *p << endl;
    
    
    cout << "(++p) = " << ++p << " and now *p = " << *p << endl;
    // ++p addes 4 bytes (because points to int) to the address
    // then  *(p) tries to defereference the (pointer+4 bytes) memory location

    /*
    *t = *t + 1; // increment value by 1
    t = t + 1; // increment address by 4 bytes in case of int, 8 bytes in case of double, etc.
    */


    return 0;
}