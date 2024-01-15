#include <bits/stdc++.h>
using namespace std;

bool isPossibleSolution(vector<long long> &heights, long long n, long long setHeight, long long metres) {

    int woodCollected = 0;

    for(int i=0;i<n; i++) {
        int diff = heights[i] - setHeight;
        if(diff > 0) {
            woodCollected += diff;
            if(woodCollected >= metres) {
                return true;
            }
        }
    }

    return false;

}


int main()
{
    long long n, metres;
    cin >> n;
    cin >> metres;
    
    long long start = 0, end = 0;
    
    vector<long long> heights;
    for(int i=0;i<n;i++){
        long long temp;
        cin >> temp;
        heights.push_back(temp);
        if(temp > end) {
            end = temp;
        }
    }
    
    long long ans;

    while(start <= end) {
        int mid = start + (end-start)/2;
        bool isPossible = isPossibleSolution(heights, n, mid, metres);
        if(isPossible) {
            ans = mid;
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    cout << ans << endl;
    
    return 0;
    
    
}