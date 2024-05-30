#include <iostream>
using namespace std;

int fib(int n) {
    int fn1 = 1, fn2 = 1, fn3 = 2;
    while(n > 1) {
        fn1 = fn2;
        fn2 = fn3;
        fn3 = fn1 + fn2;
        n--;
    }
    return fn1;
}

int main () {
    int k;
    cin >> k;
    for(int i = 1; i <= k; i++) {
        cout << fib(i) << " ";
    }
}
