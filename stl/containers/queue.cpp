#include <iostream>
#include <queue>
using namespace std;

/*

first in first out
all the below operations are O(1)

*/

int main() {
    
    queue<string> q;

    q.push("a");
    q.push("b");
    q.push("c");

    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;
    q.pop();
    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;

    cout << "Size of queue: " << q.size() << endl;

    cout << "Is empty or not: " << q.empty() << endl;
    
    return 0;

}