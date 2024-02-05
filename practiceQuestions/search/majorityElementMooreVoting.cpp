#include <iostream>
#include <vector>
using namespace std;

int findCandidate(vector<int> arr, int n) {

    int majorityIndex = 0, count = 1;
    for(int i=1;i<n;i++) {
        if(arr[i] == arr[majorityIndex]) {
            count++;
        }
        else {
            count--;
        }
        if(count == 0) {
            majorityIndex = i;
            count = 1;
        }
    }

    return arr[majorityIndex];
}

bool isValidMajority(vector<int> arr, int n, int num) {
    int count = 0;
    for(int i=0;i<n;i++) {
        if(arr[i] == num) count++;
    }
    return count > n/2;

}

int main()
{
    int n = 7;
    // vector<int> arr = {1,3,3,2,2,3,2};
    vector<int> arr = {1,3,3,2,3,3,2};
    int num = findCandidate(arr, n);
    cout << "Num was found to be: " << num << endl;
    bool isValid = isValidMajority(arr,n,num);

    if(isValid) {
        cout << num << endl;
    }
    else {
        cout << -1 << endl;
    }

	return 0;
}
