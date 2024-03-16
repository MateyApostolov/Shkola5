#include <iostream>
using namespace std;

int main () {
    int m, n, br = 0, h;
    cin >> m >> n;
    bool t;
    int c[10];
    for(int i = 0; i < 10; i++) c[i] = 0;
    for(int i = m; i <= n; i++) {
        h = i;
        t = true;
        while(h > 0) {
            if(c[h % 10] != 0) t = false;
            c[h % 10]++;
            h /= 10;
        }
        for(int i = 0; i < 10; i++) c[i] = 0;
        if(t) br++;
    }
    cout << br;
    return 0;
}
