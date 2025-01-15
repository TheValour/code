#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

// B. AND Sorting
// https://codeforces.com/problemset/problem/1682/B

void solve() {
    int n;
    cin>>n;

    int AND = (1 << 30) - 1;
    for(int i=0; i<n; i++) {
        int x; 
        cin>>x;

        if(i != x) {
            AND = AND&x;
        }
    }

    cout<<AND<<endl;    
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