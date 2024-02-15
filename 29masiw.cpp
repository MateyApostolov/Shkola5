#include <iostream>
using namespace std;

int main () {
    int n, h = 0;
    cin >> n;
    int nc[n];
    for(int i = 0; i < n; i++) {
        cin >> nc[i];
        if(nc[i] == 0 && nc[i - 1] == 0 && i != 0) {
            h = 1;
        }
    }
    if(h == 1) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}
