#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <limits.h>
using namespace std;

// B. Tenzing and Books
// https://codeforces.com/problemset/problem/1842/B

typedef long long ll;

void solve(vector<ll> &arr, int *bits, ll k) {
    
    for(ll a : arr) {
        int curr = a, t = k, i=0;
        while(curr || t) {
            if(curr&1 && (t&1) == 0) {
                return;
            }

            curr >>= 1;
            t >>= 1;
        }
        
        curr = a;
        while(curr) {
            if(curr&1) {
                bits[i] = 1;
            }
            i++;
            curr >>= 1;
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int bits[65] = {0};
        ll n, k;
        cin>>n>>k;

        vector<ll> arr(n), vrr(n), trr(n);
        for(int i=0; i<n; i++) cin>>arr[i];
        for(int i=0; i<n; i++) cin>>vrr[i];
        for(int i=0; i<n; i++) cin>>trr[i];

        solve(arr, bits, k);
        solve(vrr, bits, k);
        solve(trr, bits, k);

        int i=0, flag = 1;

        while(k) {
            if(k&1 && bits[i] == 0) {
                flag = 0;
                break;
            }
            i++;
            k >>= 1;
        }
        
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}