#include <iostream>
using namespace std;

const int maxc = 100001;
int brc[maxc];

int main () {
    int n, nc, brd = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> nc;
        brc[nc]++;
    }
    for(int i = 0; i < maxc; i++) brd += brc[i] / 2;
    if(brd % 2 == 0) cout << 2;
    else cout << 1;

    return 0;
}
