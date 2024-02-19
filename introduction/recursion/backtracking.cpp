#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve(string &digits, int digitsIndex, int internalIndex, string output, vector<string> &answer, vector<string> &mp) {
        
    if(digitsIndex >= digits.length()) {
        if(output.size()) {
            answer.push_back(output);
        }
        return;
    }

    int dIndex = digits[digitsIndex] - '0';

    // no choice but to pick the current element of the current digits index
    if(internalIndex == (mp[dIndex].size()-1)) {
        output.push_back(mp[dIndex][internalIndex]);
        solve(digits, digitsIndex + 1, 0, output, answer, mp);
    }
    else {
        // do not pick the current element of the current digits index
        solve(digits, digitsIndex, internalIndex + 1, output, answer, mp);
        // pick the current element of the current digits index
        output.push_back(mp[dIndex][internalIndex]);
        solve(digits, digitsIndex + 1, 0, output, answer, mp);
    }

    
}


void solveBacktracking(string &digits, int digitsIndex, string output, vector<string> &answer, vector<string> &mp) {
        
    if(digitsIndex >= digits.length()) {
        if(output.size()) {
            answer.push_back(output);
        }
        return;
    }

    int dIndex = digits[digitsIndex] - '0';

    for(int i=0;i<mp[dIndex].size();i++) {
        output.push_back(mp[dIndex][i]);
        solveBacktracking(digits, digitsIndex + 1, output, answer, mp);
        output.pop_back();
    }
}


int main() {
    string digits = "92";
    vector<string> mp = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string output = "";
    vector<string> answer;
    solve(digits, 0, 0, output, answer, mp);
    // solveBacktracking(digits, 0, output, answer, mp);
    for(int i=0;i<answer.size();i++) {
        cout << answer[i] << endl;
    }
    return 0;
}