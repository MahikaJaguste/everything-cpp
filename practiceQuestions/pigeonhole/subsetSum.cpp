/*
Find a non empty subset in an array of N integers such that sum of elements of subset is divisible by N

Input: arr[] = { 2, 3, 7, 1, 9 }
Output: 2
        1 2
The required subset is { 2, 3 } whose indices are 1 and 2.


Input: arr[] = {2, 11, 4}
Output: 2
        2 3 

*/

#include <iostream>
#include <map>
using namespace std;

int main() {


    int arr[] = {33, 544,64,34,22};
    int n = sizeof(arr)/sizeof(arr[0]);

    map<int, int> mp;

    int prefixSum = 0;
    int startIndex, endIndex, answer;
    for(int i=0;i<n;i++) {
        prefixSum = (prefixSum + arr[i])%n;
        if(prefixSum == 0) {
            answer = i + 1;
            startIndex = 0;
            endIndex = i;
            break;
        }
        else if(mp.find(prefixSum) != mp.end()) {
            answer = i - mp[prefixSum];
            startIndex = mp[prefixSum] + 1;
            endIndex = i;
            break;
        }
        else {
            mp[prefixSum] = i;
            
        }
    }

    cout << answer << endl;
    for(int i=startIndex;i<=endIndex;i++) {
        cout << i+1 << " ";
    }
    cout << endl;

    


    return 0;
}