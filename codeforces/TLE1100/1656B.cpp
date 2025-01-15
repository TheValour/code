#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

// B. Subtract Operation
// https://codeforces.com/problemset/problem/1656/B

void solve() {
    int n, k;
    cin>>n >> k;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];

    sort(arr.begin(), arr.end());

    int i=0, j = 1, flag = 0;
    
    while(j < n) {
        if(arr[j] - arr[i] == k) {
            flag = 1;
            break;
        }
        else if(arr[j] - arr[i] > k) {
            i++;
        }
        else {
            j++;
        }
    }
    if(flag) {
        cout<<"YES\n";
    }
    else {
        cout<<"NO\n";
    }
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