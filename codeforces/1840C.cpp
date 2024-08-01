#include <iostream>
#include <vector>
using namespace std;

//  C. Ski Resort

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, k, q;
        cin >> n >> k >> q;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long ans = 0, cnt = 0;

        for (int i = 0; i < n; ++i) {
            if (a[i] <= q) {
                ++cnt;
            } else {
                if (cnt >= k) {
                    // important line
                    ans += (long long)(cnt - k + 1) * (cnt - k + 2) / 2;
                }
                cnt = 0;
            }
        }

        if (cnt >= k) {
            ans += (long long)(cnt - k + 1) * (cnt - k + 2) / 2;
        }

        cout << ans << endl;
    }

    return 0;
}
