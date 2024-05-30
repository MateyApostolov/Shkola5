#include <iostream>
using namespace std;

int stepen(int a, int n) {
    int pr = 1;
    while(n > 0) {
        pr *= a;
        n--;
    }
    return pr;
}

int main () {
    int p, q, k, r;
    cin >> p >> q >> k;
    cout << (stepen(p, k) - stepen(q, r)) / 2;
}
