#include <iostream>
#include <set>
using namespace std;

/*

Stores only unique elements
It is implemented via BST
You cannot modify an element - just insert or delete
Elements returned in sorted order
It is slightly slower than unordered_set (where elements are in random order)

*/

int main() {
    
    set<int> s;

    // insertion in BST is O(logN)
    // insert, find, erase, count is O(logN)
    // size, begin, end, empty is O(1)
    s.insert(5);
    s.insert(4);
    s.insert(5);

    for(int i:s) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Size of set: " << s.size() << endl;

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    cout << "After erasing first element:";
    for(int i:s) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Count of element 4: " << s.count(4) << endl;
    cout << "Count of element 5: " << s.count(5) << endl;

    set<int>::iterator iter1 = s.find(4);
    set<int>::iterator iter2 = s.find(5);

    cout << "Value present at iter1: " << *iter1 << endl;
    cout << "Value present at iter2: " << *iter2 << endl;


    
    return 0;

}