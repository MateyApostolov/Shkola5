#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int nc[n];
    for(int i = 0; i < n; i++) {
        cin >> nc[i];
    }
    for(int i = 0; i < n; i++) {
        if(nc[i] != nc[n - 1 - i]) {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";

    return 0;
}
