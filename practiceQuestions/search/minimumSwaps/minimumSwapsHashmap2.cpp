#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
using namespace std;

int minSwaps(vector<int>&nums)
{
    vector<int> sortedNums;
    int n = nums.size();
    for(int i=0;i<n;i++) {
        sortedNums.push_back(nums[i]);
    }
    sort(sortedNums.begin(), sortedNums.end());

    unordered_map<int, int> mp;
    for(int i=0;i<n;i++) {
        mp[nums[i]] = i;
    }
    
    int count = 0;
    for(int i=0;i<n;) {
        if(nums[i]==sortedNums[i]) {
            i++;
            continue;
        }
        int index = mp[sortedNums[i]];
        mp[nums[index]] = i;
        mp[nums[i]] = index;
        swap(nums[index], nums[i]);
        count++;
    }
   
    return count;
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