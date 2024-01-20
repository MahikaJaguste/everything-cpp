#include <iostream>
#include <string>
using namespace std;

string removeOccurrences(string s, string part) {
    int size = s.length();
    int index = 0;
    int startIndex = 0;
    int i = 0;
    while(i < size) { 
        cout << "i: " << i << " index: " << index << " startIndex: " << startIndex << endl;
        
        if(s[i] == part[index]){
            if(index == 0) {
                startIndex = i;
            }
            index++;
            if(index == part.size()) {
                // means found part in s starting from startIndex
                cout << "we erased from startIndex to startIndex  + size: " << s << endl;
                s.erase(startIndex, part.size());
                cout << "we erased from startIndex to startIndex  + size: " << s << endl;
                i = 0;
                startIndex = 0;
                index = 0;
                size = s.size();
                continue;
            }
            i++;
        }
        else {
            if(index == 0) {
                i++;
            }
            else {
                i = startIndex + 1;
                index = 0;
            }
        }
    }
    return s;
}

int main() {
    string s = "kpygkivtlqoockpygkivtlqoocssnextkqzjpycbylkaondsskpygkpygkivtlqoocssnextkqzjpkpygkivtlqoocssnextkqzjpycbylkaondsycbylkaondskivtlqoocssnextkqzjpycbylkaondssnextkqzjpycbylkaondshijzgaovndkjiiuwjtcpdpbkrfsi";
    string part = "kpygkivtlqoocssnextkqzjpycbylkaonds";
    cout << s << endl;
    cout << part << endl;
    string s1 = removeOccurrences(s, part);
    cout << "s1: " << s1 << endl;
}