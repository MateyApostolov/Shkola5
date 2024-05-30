#include <iostream>
using namespace std;

int fakt(int n) {
    int f = 1;
    while(n > 0) {
        f *= n;
        n--;
    }
    return f;
}

int main () {
    int m, n, k;
    cin >> m >> n >> k;
    cout << (fakt(m) + fakt(n) + fakt(k)) / (fakt(3) + fakt(5));

    return 0;
}
