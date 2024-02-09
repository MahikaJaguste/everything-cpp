#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

vector<int> kthSmallestNum(int n, vector<vector<int>>&range, int q, vector<int>queries){
    sort(range.begin(), range.end());
    int realEnd = 0;
    for(int i=1;i<n;i++) {
        if(range[i][0] > range[realEnd][1]) {
            realEnd++;
            range[realEnd][0] = range[i][0];
            range[realEnd][1] = range[i][1];
            continue;
        }
        else {
            range[realEnd][0] = min(range[realEnd][0], range[i][0]);
            range[realEnd][1] = max(range[realEnd][1], range[i][1]);
        }
    }
    
    vector<int> result(q);
    for(int k=0;k<q;k++) {
        int target = queries[k];
        int count = 0;
        int found = false;
        for(int i=0;i<=realEnd;i++) {
            int numElems = range[i][1] - range[i][0] + 1;
            if(target <= count + numElems) {
                result[k] = range[i][0] + (target - count - 1);
                found = true;
                break;
            }
            count += numElems;
        }
        if(!found) {
            result[k] = -1;
        }
    }

    return result;
}


int main() {
    int n = 5;
    vector<vector<int> > range = {{1,4}, {7,12}, {3,4}, {2,5}, {2,4}};
    int q = 12;
    vector<int> queries = {1,2,3,4,5,6,7,8,9,10,11,12};
    vector<int> result = kthSmallestNum(n, range, q, queries);
    for(int i=0;i<q;i++) {
        cout << result[i] << " ";
    }

    n = 2;
    range = {{2, 6}, {5, 7}};
    q = 2;
    queries = {5,8};
    result = kthSmallestNum(n, range, q, queries);
    for(int i=0;i<q;i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}