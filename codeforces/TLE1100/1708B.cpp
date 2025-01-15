#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

// B. Difference of GCDs
// https://codeforces.com/problemset/problem/1708/B

void solve() {
    int n, l, r, flag = 0;
    cin>>n >> l >> r;

    int arr[n + 1];
    for(int i=1; i<=n; i++) {
        int mul = (l - 1)/i + 1;
        if(mul*i > r) {
            flag = 1;
            break;
        }

        arr[i] = mul * i;
    }

    if(flag) {
        cout<<"NO\n";
        return;
    }

    cout<<"YES\n";
    for(int i=1; i<=n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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