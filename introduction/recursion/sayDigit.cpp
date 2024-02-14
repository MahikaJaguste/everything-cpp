#include <iostream>
#include <string>
#include <vector>
using namespace std;

void sayDigits(int n, vector<string> &result, vector<string> &mapping) {
    if(n/10 == 0){
        result.push_back(mapping[n]);
        return;
    }
    int digit = n%10;
    sayDigits(n/10, result, mapping);
    result.push_back(mapping[digit]);
}

int main() {
    int x;
    cin >> x;
    vector<string> result;
    vector<string> mapping = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    sayDigits(x, result, mapping);
    for(int i=0;i<result.size();i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}