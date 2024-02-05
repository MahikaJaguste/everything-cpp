#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num;
    cin >> num;
	int result = 1;

    int n = num;
    while(n) {
        if(n&1) {
            break;
        }
        n = n >> 1;
        result = result << 1;
    }

    cout << result << endl;

    int result2 = num & ~(num-1);
    cout << result2 << endl;

	return 0;
}
