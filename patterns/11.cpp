#include <iostream>
using namespace std;

int main() {

    int n = 4;

    for(int i=0; i < n; i++) {
        for(int j=0; j < n; j++) {
            cout << char(65+i) << " ";
        }
        cout << endl;
    }
    return 0;
}