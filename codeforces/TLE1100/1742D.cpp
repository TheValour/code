#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

// D. Coprime
// https://codeforces.com/problemset/problem/1742/D

int __gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void solve() {
    int n, res = -1;
    cin>>n;

    int arr[1001];
    fill(arr, arr+1001, -1);
    for(int i=0; i<n; i++) {
        int x; cin>>x;

        arr[x] = i;
    }

    for(int i=1; i<1001; i++) {
        if(arr[i] == -1) continue;
        for(int j=1; j<1001; j++) {
            if(arr[j] == -1 ) continue;

            if(__gcd(i, j) == 1) {
                res = max(res, arr[i] + arr[j] + 2);
            }
        }
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