#include <iostream>
using namespace std;

//      A. Buying Torches
// https://codeforces.com/problemset/problem/1418/A

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;

        long long total = k - 1 + y*k;
        long long stick = x - 1;
        cout << ((total + stick - 1) / stick) + k << endl;
    }
    return 0;
}