#include <iostream>
#include <vector>

using namespace std;

int x, y;

// Function to find the repeating and missing elements in an array
void getTwoElements(vector<int>& arr, int n)
{
    // eg. [1,3,3]
	int xor1 = 0; // Will hold xor of all elements and numbers from 1 to n
	int set_bit_no; // Will have only a single set bit of xor1
	x = 0;
	y = 0;

	xor1 = arr[0];

	// Get the xor of all array elements
	for (int i = 1; i < n; i++)
		xor1 = xor1 ^ arr[i];

    cout << "XOR of all elements: " << xor1 << endl;

	// XOR the previous result with numbers from 1 to n
	for (int i = 1; i <= n; i++)
		xor1 = xor1 ^ i;

    cout << "XOR of all elements and 1 to n: " << xor1 << endl;

    // xor1 = 1 ^ 3 ^ 3 ^ 1 ^ 2 ^ 3
    // ie. xor1 = 2 ^ 3 = 10 ^ 11 = 01

	// Get the rightmost set bit in set_bit_no
	set_bit_no = xor1 & ~(xor1 - 1); // this is 1
    cout << "Set bit no: " << set_bit_no << endl;
    // 01 - 1 = 0
    // ~0 = 1
    // 01 & 1 = 1

	// Divide elements into two sets by comparing rightmost
	// set bit of xor1 with bit at the same position in each
	// element. Also, get XORs of two sets. The two XORs are
	// the output elements.
	for (int i = 0; i < n; i++) {
		if ((arr[i] & set_bit_no) != 0) {
            cout << "Part 1 element: " << arr[i] << endl;
			x = x ^ arr[i]; // arr[i] belongs to the first set: nothing comes here
        }
		else {
            cout << "Part 2 element: " << arr[i] << endl;
			y = y ^ arr[i]; // arr[i] belongs to the second set: 1^3^3
        }
	}

    
    cout << "XOR of part 1 elements: " << x << endl;
    cout << "XOR of part 2 elements: " << y << endl;


	for (int i = 1; i <= n; i++) {
		if ((i & set_bit_no) != 0) {
            cout << "Part 1 number: " << i << endl;
			x = x ^ i; // i belongs to the first set: 2 comes here
        }
		else {
            cout << "Part 2 number: " << i << endl;
			y = y ^ i; // i belongs to the second set: 1^3 comes here
        }
	}

    cout << "XOR of part 1 elements and numbers: " << x << endl;
    cout << "XOR of part 2 elements and numbers: " << y << endl;


	// *x and *y hold the desired output elements
    // so x = 0 ^ 2 = 2
    // so y = (1^3^3) ^ (1^3) = 3
}

int main()
{
    int n = 7;
	vector<int> arr(n,0);
    arr[0] = 1;
    arr[1] = 3;
    arr[2] = 4;
    arr[3] = 5;
    arr[4] = 1;
    arr[5] = 6;
    arr[6] = 2;
	getTwoElements(arr, n);
	cout << "The missing element is " << x
		<< " and the repeating number is " << y << endl;
	return 0;
}
