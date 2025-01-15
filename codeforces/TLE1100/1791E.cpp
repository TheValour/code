#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

// E. Negatives and Positives
// https://codeforces.com/problemset/problem/1791/E

void solve() {
    int n, cnt = 0;
    cin>>n;

    ll sum = 0, mini = INT_MAX;
    vector<ll> arr(n);
    for(int i=0; i<n; i++) {
        cin>>arr[i];

        sum += llabs(arr[i]);
        if(arr[i] < 0) {
            cnt++;
        }

        mini = min(mini, llabs(arr[i]));
    }

    if(cnt&1) {
        sum -= 2*mini;
    }

    cout<<sum<<endl;    
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