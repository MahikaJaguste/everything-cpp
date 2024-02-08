#include <iostream>
#include <vector>
using namespace std;

int binarySearchLessEqualTo(vector<int> arr, int n, int target) {
    int start = 0, end = n-1;
    int answer = -1;
    while(start <= end) {
        int mid = start + (end-start)/2;
        if(arr[mid] <= target) {
            answer = mid;
            start = mid+1;
        }
        else {
            end = mid - 1;
        }
    }
    return answer;
}

int main() {
    int n;
    vector<int> arr;
    vector<int> prefixSum;
    int q;

    cin >> n;
    for(int i=0;i<n;i++) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    cin >> q;

    sort(arr.begin(), arr.end());

    int lastSum = 0;
    for(int i=0;i<n;i++) {
        lastSum += arr[i];
        prefixSum.push_back(lastSum);
    }

    for(int round=1;round<=q;round++) {
        int m;
        cin >> m;

        int index = binarySearchLessEqualTo(arr, n, m);
        if(index == -1) {
            cout << "0 0" << endl;
        }
        else {
            cout << (index+1) << " " << prefixSum[index] << endl;
        }
    }

    return 0;
}


