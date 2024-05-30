#include <iostream>
using namespace std;

int nod(int a, int b) {
    int nodab = 1;
    for(int i = 1; i < min(a, b); i++) {
        if(a % i == 0 && b % i == 0) {
            nodab = i;
        }
    }
    return nodab;
}

int main () {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << nod(a, b) + 2 * nod(c, d);
}
