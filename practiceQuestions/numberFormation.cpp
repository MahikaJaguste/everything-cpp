#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int arr[] = {1,2,3};
    int l = sizeof(arr) / sizeof(int);

    int x = 0, y = 0;

    for(int i=0; i < l; i++){
        x = (10*x) + arr[i];
    }

    for(int i=0; i < l; i++) {
        y += int(pow(10, i)) * arr[i];
    }

    cout << x << " " << y << endl;
    return 0;
}