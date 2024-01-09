#include <iostream>
using namespace std;

int main() {
    // case constants can only be int or char (not float or string)

    int a = 10, b = 5;
    char ch;
    cin >> ch;

    switch (ch)
    {
    case '+':
        cout << "Sum: " << (a+b) << endl;
        break;
    case '-':
        cout << "Difference: " << (a-b) << endl;
        break;
    case '*':
        cout << "Product: " << (a*b) << endl;
        break;
    case '/':
        cout << "Quotient: " << (a/b) << endl;
        break;
    case '%':
        cout << "Remainder: " << (a%b) << endl;
        break;
    default:
        cout << "No matching case" << endl;
        break;
    }

    int amount;
    cin >> amount;

    switch (100)
    {
        case 100: {
            int x = amount/100;
            cout << "Number of 100 rs notes = " << x << endl;
            amount -= 100*x;
        }
        case 50: {
            int y = amount/50;
            cout << "Number of 50 rs notes = " << y << endl;
            amount -= 50*y;
        }
        case 20: {
            int z = amount/20;
            cout << "Number of 20 rs notes = " << z << endl;
            amount -= 20*z;
        }
        case 1: {
            int w = amount/1;
            cout << "Number of 1 rs notes = " << w << endl;
            amount -= 1*w;
        }
        default:
            break;
    }
                
    return 0;
}