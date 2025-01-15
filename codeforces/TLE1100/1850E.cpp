#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <limits.h>
using namespace std;

// E. Cardboard for Pictures
// https://codeforces.com/problemset/problem/1850/E

typedef long long ll;

bool util(vector<ll> &arr, ll k, ll mid) {
    ll area = 0;

    for(ll n : arr) {
        area += ((n + mid + mid) * (n + mid + mid));

        if(area > k) {
            return false;
        }
    }

    return true;
}

ll solve(vector<ll> &arr, ll k) {
    ll left = 1, right = INT_MAX, res = -1;

    while(left <= right) {
        ll mid = left + (right - left)/2;

        if(util(arr, k, mid)) {
            left = mid + 1;
            res = mid;
        }
        else {
            right = mid - 1;
        }
    }

    return res;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin>>n>>k;

        vector<ll> arr(n);
        for(int i=0; i<n; i++) cin>>arr[i];

        cout<<solve(arr, k)<<endl;
    }
    return 0;
}