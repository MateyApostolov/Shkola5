#include <iostream>
using namespace std;

int main () {
    int n, sum = 0, pnot;
    cin >> n;
    int nc[n];
    for(int i = 0; i < n; i++) {
        cin >> nc[i];
        if(nc[i] < 0) {
            sum += nc[i];
        } else {
            pnot = nc[i];
            cout << pnot << " " << sum;
            return 0;
        }
    }
    cout << "No";

    return 0;
}
