#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> arr, int size) {
    for(int i=0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

vector<int> mergeSort(vector<int> &arr, int start, int end) {
    if(start > end) {
        return {};
    }
    if(start == end) {
        return {arr[start]};
    }
    int mid = start + (end-start)/2;
    vector<int> firstHalfSorted = mergeSort(arr, start, mid);
    vector<int> secondHalfSorted = mergeSort(arr, mid+1, end);
    vector<int> result;
    int i=0,j=0;
    while(i<firstHalfSorted.size() && j<secondHalfSorted.size()) {
        if(firstHalfSorted[i] < secondHalfSorted[j]) {
            result.push_back(firstHalfSorted[i++]);
        }
        else {
            result.push_back(secondHalfSorted[j++]);
        } 
    }
    while(i<firstHalfSorted.size()) {
        result.push_back(firstHalfSorted[i++]);
    }
    while(j<secondHalfSorted.size()) {
        result.push_back(secondHalfSorted[j++]);
    }
    return result;
}
    
int main() {
    int n;
    cin >> n;

    vector<int> arr;
    int x;
    for(int i=0;i<n;i++) {
        cin >> x;
        arr.push_back(x);
    }

    printArray(arr, n);
    arr = mergeSort(arr, 0, n-1);
    printArray(arr, n);

}