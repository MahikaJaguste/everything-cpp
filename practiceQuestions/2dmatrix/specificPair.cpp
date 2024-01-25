/*Given an n x n matrix mat[n][n] of integers, find the maximum value of mat(c, d) – mat(a, b) 
over all choices of indexes such that both c > a and d > b.*/

#include <iostream>
#include <vector>
using namespace std;

int findSpecificPair(vector<vector<int> > arr, int n) {

    int minArr[n][n], maxArr[n][n];

    minArr[0][0] = arr[0][0];
    for(int c=1;c<n;c++) {
        minArr[0][c] = min(minArr[0][c-1], arr[0][c]);
    }
    for(int r=1;r<n;r++) {
        minArr[r][0] = min(minArr[r-1][0], arr[r][0]);
    }

    maxArr[n-1][n-1] = arr[n-1][n-1];
    for(int c=n-2;c>=0;c--) {
        maxArr[n-1][c] = max(maxArr[n-1][c+1], arr[n-1][c]);
    }
    for(int r=n-2;r>=0;r--) {
        maxArr[r][n-1] = max(maxArr[r+1][n-1], arr[r][n-1]);
    }

    for(int i=1;i<n;i++) {
        for(int j=1;j<n;j++) {
            minArr[i][j] = min(min(minArr[i-1][j], minArr[i][j-1]), arr[i][j]);
        }
    }

    for(int i=n-2;i>=0;i--) {
        for(int j=n-2;j>=0;j--) {
            maxArr[i][j] = max(max(maxArr[i][j+1], maxArr[i+1][j]), arr[i][j]);
        }
    }

    int maxDifference = INT_MIN;
 
    for(int i=0;i<n-1;i++) {
        for(int j=0;j<n-1;j++) {
            int diff = maxArr[i+1][j+1] - minArr[i][j];
            if(diff > maxDifference) {
                maxDifference = diff;
            }
        }
    }
    
    return maxDifference;
}


int findSpecificPairOptimised(vector<vector<int> > arr, int n) {

    int minArr[n][n];

    minArr[0][0] = arr[0][0];
    for(int c=1;c<n;c++) {
        minArr[0][c] = min(minArr[0][c-1], arr[0][c]);
    }
    for(int r=1;r<n;r++) {
        minArr[r][0] = min(minArr[r-1][0], arr[r][0]);
    }
    for(int i=1;i<n;i++) {
        for(int j=1;j<n;j++) {
            minArr[i][j] = min(min(minArr[i-1][j], minArr[i][j-1]), arr[i][j]);
        }
    }

    int maxDifference = INT_MIN;

    for(int i=1;i<n;i++) {
        for(int j=1;j<n;j++) {
            int diff = arr[i][j] - minArr[i-1][j-1];
            if(diff > maxDifference) {
                maxDifference = diff;
            }
        }
    }
    
    return maxDifference;
}

int findSpecificPairSingleTraverse(vector<vector<int> > arr, int n) {
    if(n==2) {
		// only one answer possible
		return arr[1][1] - arr[0][0];
	}
    
	int minArr[n][n];

    minArr[0][0] = arr[0][0];
    int maxDifference = arr[1][1] - minArr[0][0];
    for(int c=1;c<n-1;c++) {
        minArr[0][c] = min(minArr[0][c-1], arr[0][c]);
        int diff = arr[1][c+1] - minArr[0][c];
		maxDifference = max(diff, maxDifference);
    }
    for(int r=1;r<n-1;r++) {
        minArr[r][0] = min(minArr[r-1][0], arr[r][0]);
        int diff = arr[r+1][1] - minArr[r][0];
		maxDifference = max(diff, maxDifference);
    }

    for(int i=1;i<n-1;i++) {
        for(int j=1;j<n-1;j++) {
            minArr[i][j] = min(min(minArr[i-1][j], minArr[i][j-1]), arr[i][j]);
			int diff = arr[i+1][j+1] - minArr[i][j];
			maxDifference = max(diff, maxDifference);
        }
    }
    
    return maxDifference;
}
int main() {
    int n;
    cin >> n;

    vector<vector<int> > arr;

    for(int i=0;i<n;i++) {
        vector<int> temp;
        for(int j=0;j<n;j++) {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        arr.push_back(temp);
    }

    cout << findSpecificPair(arr, n) << endl;
    cout << findSpecificPairOptimised(arr, n) << endl;
    cout << findSpecificPairSingleTraverse(arr, n) << endl;
}


