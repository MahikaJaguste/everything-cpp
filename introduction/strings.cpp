#include <iostream>
#include <string>
using namespace std;

int getLength(char ch[]) {
    int index = 0;
    while(ch[index] != '\0'){ 
        index++;
    }
    return index;
}

void reverseString(char ch[], int len) {
    int start = 0, end = len - 1;
    while(start < end) {
        swap(ch[start++], ch[end--]);
    }
}

char toLowerCase(char ch) {
    if(ch >= 'a' && ch <= 'z') {
        return ch;
    }
    else if(ch >= 'A' && ch <= 'Z') {
        return ch - 'A' + 'a';
    }
    else {
        return '\0';
    }
}

int main() {
    char ch[10];
    cout << ch << endl;

    ch[0] = 'a';
    ch[1] = 'b';
    ch[2] = '\0';
    ch[3] = 'c';

    cout << ch << endl;

    cin >> ch;
    cout << ch << endl;

    int len = getLength(ch);
    cout << "Length is: " << len << endl;
    reverseString(ch, len);
    cout << "Reverse string is: " << ch << endl;

    cout << "Lowercase of B is: " << toLowerCase('B') << endl;
    cout << "Lowercase of b is: " << toLowerCase('b') << endl;
    cout << "Lowercase of 5 is: " << toLowerCase('5') << endl;

    string s = "abc\0abc";
    cout << s << endl;

    return 0;
}