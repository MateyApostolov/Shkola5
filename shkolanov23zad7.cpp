#include <iostream>
using namespace std;

int main () {
    int num, sum1 = 0, sum2 = 1;
    cin >> num;
    for(int i = 1; i <= num; i++) {
        sum1 += i;
    }
    cout << sum1 << endl;
    for(int i = 1; i <= num; i++) {
        sum2 *= i;
    }
    cout << sum2;

    return 0;
}
