
#include <iostream>
#include <array>
using namespace std;

// Array is a collection of data of same type stored in contiguous memory locations.
int main() {
    // Array declaration by specifying size
    int basic[3] = {1,2,3};

    // Using array library
    // Implementation of array stl happens from a fixed size static array, hence size cannot be changed dynamically.
    array<int, 4> a = {1,2,4};
   
    // stores 0 in remaining elements
    cout << basic[0] << " " << a[3] << endl;

    int size = a.size();
    cout << "Size of array is " << size << endl;

    // Accessing elements
    for(int i=0; i<size; i++) {
        cout << a[i] << endl;
    }

    // Is array empty
    cout << "Is array empty: " << a.empty() << endl;

    // First element
    cout << "Front element: " << a.front() << endl;

    // Last element
    cout << "Last element: " << a.back() << endl;

    // Third element
    cout << "Third element: " << a.at(2) << endl;

    // Filling array with a value
    a.fill(10);

    return 0;
}