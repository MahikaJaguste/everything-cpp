#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int minSwaps(vector<int>&nums)
{
    vector<pair<int,int> > sortedNums;
    int n = nums.size();
    for(int i=0;i<n;i++) {
        pair<int, int> temp;
        temp.first = nums[i];
        temp.second = i;
        sortedNums.push_back(temp);
    }
    sort(sortedNums.begin(), sortedNums.end());

    vector<int> visited(n, 0);
    int answer = 0;
    
    for(int i=0;i<n;i++) {
        if(sortedNums[i].second == i || visited[i]) {
            continue; // it was already in place or it was visited in an earlier cycle
        }
        else {
            int index = sortedNums[i].second;
            int count = 0;
            while(true) {
                visited[index] = true;
                count++;
                index = sortedNums[index].second;
                if(index == i) {
                    break;
                }
            }
            answer += count;
        }
    }

    return answer;
}

int main() {
    vector<int> arr = {14,15, 4 ,5,6};
    cout << minSwaps(arr) << " == 4" << endl;
    arr = {2, 4, 5, 1, 3};
    cout << minSwaps(arr) << " == 3" << endl;
    arr = {2, 8, 5, 4};
    cout << minSwaps(arr) << " == 1" << endl;
    arr = {2,3,4,5,6,7,8,9,1};
    cout << minSwaps(arr) << " == 8" << endl;
    arr = {10, 19, 6, 3, 5};
    cout << minSwaps(arr) << " == 2" << endl;
    return 0;
}