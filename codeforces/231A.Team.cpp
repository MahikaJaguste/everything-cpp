#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;
    for(int i=0; i<n; i++) {
        int temp_count = 0;
        for(int j=0; j<3; j++) {
            int x;
            cin >> x;
            if(x) {
                temp_count += 1;
            }
        }
        if(temp_count >= 2) {
            count += 1;
        }
    }

    cout << count;
    return 0;
}
