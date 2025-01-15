#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

// C. Yet Another Card Deck
// https://codeforces.com/problemset/problem/1511/C

void solve() {
    int n, m;
    cin>>n>>m;

    int arr[n], q[m];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    for(int i=0; i<m; i++) {
        cin>>q[i];
    }
    
    vector<int> freq(51, -1);
    for(int i=0; i<n; i++) {
        if(freq[arr[i]] == -1) {
            freq[arr[i]] = i;
        }
    }

    vector<int> res(m);
    for(int i=0; i<m; i++) {
        res[i] = freq[q[i]];
        
        for(int j=1; j<51; j++) {
            if(freq[j] < freq[q[i]]) {
                freq[j]++;
            }
        }

        freq[q[i]] = 0;
    }

    for(int i=0; i<m; i++) {
        cout<<res[i] + 1<<" ";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // int t;
    // cin >> t;
    
    // while (t--) {
        solve();
    // }
    
    return 0;
}