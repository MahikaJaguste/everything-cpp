#include <iostream>
#include <map>
using namespace std;

/*

Data stored in key value form
All keys must be unique, one key only points to one value
Keys come in sorted order
In unordered map, they come in random order
*/

int main() {
    
    map<int, string> m;

    // insert, find, count erase in map is O(logN)
    // in case of unordered map it is O(1)

    // map implemented through random black tree or balance tree
    // unordered map is implemented through hash table
    m[1] = "a";
    m[13] = "c";
    m[2] = "b";

    // m.insert({4, "d"});

    for(auto i: m) {
        cout << i.first << ":" << i.second << endl;
    }
    
    cout << "Finding 2: " << m.count(2) << endl;
    cout << "Finding 5: " << m.count(5) << endl;

    m.erase(2);
    cout << "After erase:" << endl;
    for(auto i: m) {
        cout << i.first << ":" << i.second << endl;
    }

    cout << "Printing using iterator:" << endl;
    map<int, string>::iterator it = m.find(1);
    for(map<int, string>::iterator iter = it; iter != m.end(); iter++) {
        cout << (*iter).first << ":" << (*iter).second << endl;
    }

    
    return 0;

}