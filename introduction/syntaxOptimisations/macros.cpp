#include <iostream>
using namespace std;

#define PI 3.14
#define AREA(l, b) (l * b)
#define min(a,b) ((a<b)?a:b)

int main() {
    int r = 5;
    cout << "Area = " << PI * 5 * 5 << endl;
    cout << "Area of square = " << AREA(r,r) << endl; // converted to r*r by compiler
    cout << "Min of 4 and 5 = " << min(4,5) << endl;
    return 0;
}