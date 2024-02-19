#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> arr, int size) {
    for(int i=0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

vector<vector<int>> subsets(vector<int>& arr, int index, vector<int> output, vector<vector<int> > &answer) {
    if(index >= arr.size()) {
        answer.push_back(output);
        return answer;
    }

    // exclude the element at index in the current subset (output)
    subsets(arr, index+1, output, answer);

    // include the element at index in the current subset (output)
    output.push_back(arr[index]);
    subsets(arr, index+1, output, answer);

    return answer;
};

int main() {
    vector<int> arr = {1,2,3, 4}; 
    vector<int> output = {};
    vector<vector<int> > answer;
    subsets(arr, 0, output, answer);
    cout << "Size of power set = " << answer.size();
    for(int i=0;i<answer.size();i++) {
        printArray(answer[i], answer[i].size());
    }
    return 0;
}