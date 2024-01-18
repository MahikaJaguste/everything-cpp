#include <iostream>
#include <queue>
using namespace std;

/*

The first element will always be the greatest
It related to the max heap implementation (default priority queue is max heap)
We can also convert it to min heap

*/

int main() {
    
    // max heap
    priority_queue<int> maxi;

    // min heap
    priority_queue<int, vector<int>, greater<int> > mini;

    maxi.push(3);
    maxi.push(4);
    maxi.push(1);
    maxi.push(2);

    int count = maxi.size();
    for (int i = 0; i < count; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    mini.push(3);
    mini.push(4);
    mini.push(1);
    mini.push(2);

    count = mini.size();
    for (int i = 0; i < count; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;

    cout << "Empty or not: " << mini.empty() << endl;
    
    return 0;

}