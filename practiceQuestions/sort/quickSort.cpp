#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> arr, int size) {
    for(int i=0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int partitionOneTraverse(vector<int> &arr, int start, int end) {
    int pivotValue = arr[start];
    int i = start, j = end, curr = start+1;
    while(i<j){
        // if number is smaller, just bring it to i
        // no need of swapping because we have already been through elements on the left of curr
        if(arr[curr]<pivotValue) {
            arr[i] = arr[curr];
            i++;
            curr++;
        }
        else {
            // means number of elements to parse finished
            if(j==curr) {
                break;
            }
            swap(arr[j], arr[curr]);
            // curr is not incremented as now we need to inspect the swapped number
            j--;
        }
    }
    arr[i] = pivotValue;
    return i;
}

int partition(vector<int> &arr, int start, int end) {
    int pivotValue = arr[start];
    int pivotIndex = start;
    for(int k=start+1;k<=end;k++) {
        if(arr[k]<=pivotValue) {
            pivotIndex++;
        }
    }
    swap(arr[start], arr[pivotIndex]);

    int i = start, j = end;
    while(i<pivotIndex){
        // if number on the left is large than pivot, swap
        // and inspect the swapped number
        if(arr[i]>pivotValue) {
            swap(arr[i],arr[j]);
            j--;
        }
        else {
            // move to the next element
            i++;
        }
    }
    return pivotIndex;
}

int partitionRandomPivot(vector<int> &arr, int start, int end) {
    int pivotOriginalIndex = start + (rand() % (end-start+1));
    int pivotValue = arr[pivotOriginalIndex];
    int pivotIndex = start;
    for(int k=start;k<=end;k++) {
        if(k==pivotOriginalIndex) continue;
        if(arr[k]<=pivotValue) {
            pivotIndex++;
        }
    }
    swap(arr[pivotOriginalIndex], arr[pivotIndex]);

    int i = start, j = end;
    while(i<pivotIndex){
        // if number on the left is large than pivot, swap
        // and inspect the swapped number
        if(arr[i]>pivotValue) {
            swap(arr[i],arr[j]);
            j--;
        }
        else {
            // move to the next element
            i++;
        }
    }
    return pivotIndex;
}

int getMedianPivotIndex(vector<int> &arr, int start, int end) {
    int mid = start + (end-start)/2;
    int maxIndex = arr[start] > arr[end] ? start : end;
    if(arr[maxIndex]>arr[mid]) { // lets say m is end, then either mid,start,end  OR start,mid,end
        int mini = arr[start] <= arr[end] ? start : end;
        return arr[mid] > arr[mini] ? mid : mini;
    }
    return maxIndex;
}

int partitionMedianOfThree(vector<int> &arr, int start, int end) {
    int pivotOriginalIndex = getMedianPivotIndex(arr, start, end);
    int pivotValue = arr[pivotOriginalIndex];
    int pivotIndex = start;
    for(int k=start;k<=end;k++) {
        if(k==pivotOriginalIndex) continue;
        if(arr[k]<=pivotValue) {
            pivotIndex++;
        }
    }
    swap(arr[pivotOriginalIndex], arr[pivotIndex]);

    int i = start, j = end;
    while(i<pivotIndex){
        // if number on the left is large than pivot, swap
        // and inspect the swapped number
        if(arr[i]>pivotValue) {
            swap(arr[i],arr[j]);
            j--;
        }
        else {
            // move to the next element
            i++;
        }
    }
    return pivotIndex;
}



void quickSort(vector<int> &arr, int start, int end) {

    // base case
    if(start >= end) {
        return;
    }

    // partition the array
    // int pivot = partition(arr, start, end);
    // int pivot = partitionOneTraverse(arr, start, end);
    // int pivot = partitionRandomPivot(arr, start, end);
    int pivot = partitionMedianOfThree(arr, start, end);

    // one pass complete
    // now recurse on both partitions
    quickSort(arr, start, pivot-1);
    quickSort(arr, pivot+1, end);
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
    quickSort(arr, 0, n-1);
    printArray(arr, n);
    

}