#include <iostream>
using namespace std;

int main () {
    int k, st = 0, maxst = 0, np = 0;
    cin >> k;
    string s, hs;
    cin >> s;
    for(int i1 = 0; i1 < s.size(); i1++) {
        int brs[26] = {0};
        for(int i2 = i1; i2 < s.size(); i2++) {
            brs[s[i2] - 'a']++;
            int h = 0;
            for(int i3 = 0; i3 < k; i3++) if(brs[i3] != 0) h++;
            if(h > 1) break;
            if(h == 1) {
                st = i2 - i1 + 1;
                if(maxst < st) {
                    maxst = st;
                    np = i1;
                }
            }
        }
    }
    cout << maxst << "\n";
    if(maxst != 0) cout << s.substr(np, maxst);
    return 0;
}
