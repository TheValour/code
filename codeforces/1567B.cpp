#include <iostream>
using namespace std;


// B. MEXor Mixup
// https://codeforces.com/problemset/problem/1567/B

int xorUpto(int n) {
    if (n % 4 == 0) return n;
    else if (n % 4 == 1) return 1;
    else if (n % 4 == 2) return n + 1;
    else return 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int MEX, XOR;
        cin >> MEX >> XOR;

        int curr = xorUpto(MEX - 1);

        if (curr == XOR) cout << MEX << endl;
        else if ((curr ^ MEX) == XOR) cout << MEX + 2 << endl;
        else cout << MEX + 1 << endl;
    }
    return 0;
}