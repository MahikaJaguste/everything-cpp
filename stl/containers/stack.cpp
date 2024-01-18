#include <iostream>
#include <stack>
using namespace std;

/*

last in first out

*/

int main() {
    
    stack<string> s;

    s.push("a");
    s.push("b");
    s.push("c");

    cout << "Top element: " << s.top() << endl;
    s.pop();
    cout << "Top element after pop: " << s.top() << endl;

    cout << "Size of stack: " << s.size() << endl;

    cout << "Is empty or not: " << s.empty() << endl;
    
    return 0;

}