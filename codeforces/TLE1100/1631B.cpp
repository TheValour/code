#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

// B. Fun with Even Subarrays
// https://codeforces.com/problemset/problem/1631/B

void solve() {
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    reverse(arr.begin(), arr.end());

    int i=1, res = 0;
    while(i < n) {
        if(arr[i] == arr[0]) {
            i++;
            continue;
        }

        res++;
        i *= 2;
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