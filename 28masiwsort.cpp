#include <bits/stdc++.h>
using namespace std;

int maim () {
    int n, brst2 = 0;
    cin >> n;
    int nc[n], h[n];
    for(int i = 0; i < n; i++) {
        cin >> nc[i];
        h[i] = nc[i];
        while(nc[i] > 1 && nc[i] % 2 == 0) {
            nc[i] /= 2;
        }
        if(nc[i] == 1) brst2++;
    }
    int st2[brst2];
    for(int i = 0; i < n; i++) {
        if(nc[i] == 1) {
            st2[i] = h[i];
        }
    }
    sort(st2, st2 + brst2);
    for(int i = 0; i < brst2; i++) {
        cout << st2[i] << " ";
    }


    return 0;
}
