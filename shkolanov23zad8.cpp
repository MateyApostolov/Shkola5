#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    double a;
    cin >> a;
    int sum = 1;
    for(int i = 1; i <= n; i++) {
        sum = sum * a;
    }
    cout << sum;

    return 0;
}
