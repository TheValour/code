#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

// B. GCD Partition
// https://codeforces.com/problemset/problem/1780/B

ll __gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void solve() {
    int n;
    cin>>n;

    int arr[n];
    ll sum = 0, curr = 0, res = 0;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
        sum += arr[i];
    }

    for(int i=0; i<n-1; i++) {
        curr += arr[i];
        res = max(res, __gcd(curr, sum - curr));
    }

    cout<<res<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}