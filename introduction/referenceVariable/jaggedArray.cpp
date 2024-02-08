#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows = 3;
    vector<int> cols = {1,2,3,4};

    int** arr = new int*[rows];
    for(int i=0;i<rows;i++) {
        arr[i] = new int[cols[i]];
    }

    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols[i];j++) {
            arr[i][j] = i+j;
        }
    }

    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols[i];j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for(int i=0;i<rows;i++) {
        delete []arr[i];
    }
    delete []arr;


    return 0;
}