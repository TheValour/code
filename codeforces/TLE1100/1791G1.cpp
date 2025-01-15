#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

// G1. Teleporters (Easy Version)
// https://codeforces.com/problemset/problem/1791/G1

void solve() {
    int n, k;
    cin>>n>>k;

    vector<ll> arr(n);
    for(int i=0; i<n; i++) {
        cin>>arr[i];
        arr[i] += (i + 1);
    }

    sort(arr.begin(), arr.end());

    ll curr = 0, i=0;
    while(i < n && curr + arr[i] <= k) {
        curr += arr[i];
        i++;
    }

    cout<<i<<endl;
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