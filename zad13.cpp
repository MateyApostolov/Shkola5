#include <iostream>
using namespace std;

bool istr (int a, int b, int c) {
    if(a + b < c || a + c < b || b + c < a) return false;
    else return true;
}

string wid (int a, int b, int c) {
    string s;
    if(a == b && b == c) {
        s = "rawnostranen";
        return s;
    }
    if(a == b && b != c || c == b && a != c || a == c && c != b) {
        s = "rawnobedren";
        return s;
    }
    if(a != b && b != c && a != c) {
        s = "raznostranen";
        return s;
    }
}

int main () {
    int n, a, b, c;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        if(istr(a, b, c)) cout << "Yes ";
        else cout << "No ";
        cout << wid(a, b, c) << "\n";
    }


    return 0;
}
