#include <iostream>
using namespace std;

int main () {
    int n, m;
    cin >> n >> m;
    if(n > m) swap(n, m);
    if(n == 1) {
        cout << 1 << "\n" << 1;
        return 0;
    }
    if((n % 2 == 0 && m % 2 == 0) || (n % 2 == 1 && m % 2 == 1)) {
        cout << 2;
        return 0;
    }
    if((n % 2 == 1 && m % 2 == 0) || (n % 2 == 0 && m % 2 == 1)) {
        if(n == 2) cout << 1 << "\n" << m;
        else cout << 1 << "\n" << m + n;
    }
    return 0;
}
