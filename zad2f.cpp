#include <iostream>
using namespace std;

int lice(int a, int b) {
    return a * b;
}

int obikolka(int a, int b) {
    return 2 * (a + b);
}

int main () {
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    cout << lice(a, b) - lice(x, y) << " " << obikolka(a, b) + obikolka(x, y);

    return 0;
}
