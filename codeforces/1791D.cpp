#include <bits/stdc++.h>
using namespace std;

//  D. Distinct Split
//  https://codeforces.com/problemset/problem/1791/D

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        string st;
        cin>>st;
        
        int arr[n], vrr[n];
        unordered_set<char> mp;
        for(int i=0; i<n; i++) {
            mp.insert(st[i]);
            arr[i] = mp.size();
        }
        mp.clear();
        for(int i=n-1; i>=0; i--) {
            mp.insert(st[i]);
            vrr[i] = mp.size();
        }
        
        int res = 0;
        for(int i=0; i<n-1; i++) {
            int curr = arr[i] + vrr[i + 1];
            res = max(res, curr);
        }
        cout<<res<<endl;
    }
}