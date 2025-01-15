#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll; 

// B. Maximum Sum
// https://codeforces.com/problemset/problem/1832/B

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;

        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end()); 

        vector<ll> pr(n + 1, 0); 
        for (ll i = 0; i < n; i++) {
            pr[i + 1] = pr[i] + a[i];
        }

        ll ans = 0;
        for (ll i = 0; i <= k; i++) {
            ans = max(ans, pr[n - (k - i)] - pr[2 * i]);
        }

        cout << ans << endl;
    }
    return 0;
}