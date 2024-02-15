#include <iostream>
using namespace std;

int main () {
    long long n;
    cin >> n;
    long long kut = n / 144;
    long long wr = (n % 144) / 12;
    long long ch = (n % 144) % 12;
    long long allz1 = kut * 114000 + wr * 10250 + ch * 1050;
    long long allz2 = kut * 114000 + (wr + 1) * 10250;
    long long allz3 = (kut + 1) * 114000;
    if(allz1 < allz2 && allz1 < allz3)
        cout << kut << " " << wr << " " << ch;
    if(allz2 < allz1 && allz2 < allz3)
        cout << kut << " " << wr + 1 << " " << 0;
    if(allz3 < allz1 && allz3 < allz2)
        cout << kut + 1 << " " << 0 << " " << 0;
    return 0;
}
