#include <iostream>
using namespace std;

int main () {
    int n, h, m, pr, ngpr = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
         cin >> h >> m >> pr;
         if(h * 60 + m + pr > ngpr) ngpr = h * 60 + m + pr;
    }
    cout << ngpr / 60 << " " << ngpr % 60;

    return 0;
}
