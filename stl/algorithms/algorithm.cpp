#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main() {
    
    vector<int> v;

    v.push_back(5);
    v.push_back(1);
    v.push_back(3);
    v.push_back(7);

    cout << "Searching for 5: " << binary_search(v.begin(), v.end(), 5) << endl;
    cout << "Searching for 6: " << binary_search(v.begin(), v.end(), 6) << endl;


    for(int i: v) {
        cout << i << " ";
    }
    cout << endl;


    // based on introsort
    // it is a combination of 3 sorting algorithms: quick sort, heap sort and insertion sort
    sort(v.begin(), v.end());
    cout << "After sorting: " << endl;
    for(int i: v) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Searching for 5: " << binary_search(v.begin(), v.end(), 5) << endl;
    cout << "Searching for 6: " << binary_search(v.begin(), v.end(), 6) << endl;

    cout << "Lower bound for 2: " << lower_bound(v.begin(), v.end(), 2) - v.begin() << endl;
    cout << "Upper bound for 6: " << upper_bound(v.begin(), v.end(), 6) - v.begin() << endl;


    int a=3, b=5;
    cout << "Before swap: a = " << a << " and b = " << b << endl;
    cout << "Max: " << max(a,b) << endl;
    cout << "Min: " << min(a,b) << endl;

    swap(a,b);
    cout << "After swap: a = " << a << " and b = " << b << endl;

    string s = "abcd";
    cout << "Before reverse: s = " << s << endl;
    reverse(s.begin(), s.end());
    cout << "After reverse: s = " << s << endl;

    // rotates to the left
    // middle value indicates how many elements to rotate
    rotate(v.begin(), v.begin() + 2, v.end());
     cout << "After rotating: " << endl;
    for(int i: v) {
        cout << i << " ";
    }
    cout << endl;


    return 0;

}