#include <iostream>
using namespace std;

int main () {
    int a, b, c;
    cin >> a >> b >> c;
    int trc, chc;
    for(int i = 999; i >= 100; i--) {
        if(i % b == 0) {
            trc = i;
            break;
        }
    }
    for(int i = 1000; i <= 9999; i++) {
        if(i % c == 0) {
            chc = i;
            break;
        }
    }
    int izhc = trc + a + chc;
    cout << izhc;

    return 0;
}
