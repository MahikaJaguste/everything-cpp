#include <iostream>
#include <vector>
using namespace std;

void searchElement(int arr[3][3], int n, int m) {
    int elemToSearch;
    cout << "Enter element to search: ";
    cin >> elemToSearch;
    bool found = false;
    int rowIndex = 0, colIndex = 0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(arr[i][j] == elemToSearch) {
                found = true;
                rowIndex = i;
                colIndex = j;
                break;
            }
        }
        if(found) {
            break;
        }
    }
    if(found) {
        cout << "Element " << elemToSearch << " found at row " << rowIndex << " and column " << colIndex << endl;
    }
    else {
        cout << "Element not found" << endl;
    }
    return;
}

void rowWiseSum(int arr[3][3], int n, int m) {
    vector<int> rowSum;
    for(int i=0;i<n;i++) {
        int sum = 0;
        for(int j=0;j<m;j++) {
            sum += arr[i][j];
        }
        rowSum.push_back(sum);
    }

    cout << "Row wise sum is: " << endl;
    for(int i=0;i<rowSum.size();i++) {
        cout << rowSum[i] << endl;
    }

    return;
}

void colWiseSum(int arr[3][3], int n, int m) {
    vector<int> colSum;
    for(int i=0;i<m;i++) {
        int sum = 0;
        for(int j=0;j<n;j++) {
            sum += arr[j][i];
        }
        colSum.push_back(sum);
    }

    cout << "Column wise sum is: " << endl;
    for(int i=0;i<colSum.size();i++) {
        cout << colSum[i] << " ";
    }
    cout << endl;

    return;
}

void largestRowSum(int arr[3][3], int n, int m) {
    int rowIndex = 0;
    int largestSum = INT_MIN;
    for(int i=0;i<n;i++) {
        int sum = 0;
        for(int j=0;j<m;j++) {
            sum += arr[i][j];
        }
        if(sum > largestSum) {
            largestSum = sum;
            rowIndex = i;
        }
    }

    cout << "Largest row sum is: " << largestSum << " of row index " << rowIndex << endl;
    return;
}


int main()
{
    int n = 3, m = 3;
    int arr[3][3];

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            arr[i][j] = (i * m + j) + 1;
        }
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }

    // initialising populates the array in a row wise manner
    // int brr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    // for(int i=0;i<3;i++) {
    //     for(int j=0;j<4;j++) {
    //         cout << brr[i][j] << ' ';
    //     }
    //     cout << endl;
    // }

    // int crr[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    // for(int i=0;i<4;i++) {
    //     for(int j=0;j<3;j++) {
    //         cout << crr[i][j] << ' ';
    //     }
    //     cout << endl;
    // }

    // searchElement(arr, n, m);
    rowWiseSum(arr, n, m);
    colWiseSum(arr, n,m );
    largestRowSum(arr, n, m);

    return 0;
}