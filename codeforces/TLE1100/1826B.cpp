#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;
typedef long long ll; 
const ll MOD = 1e9 + 7;

// B. Lunatic Never Content
// https://codeforces.com/problemset/problem/1826/B

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;

        vector<int> arr(n);
        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }
        if(n == 1) {
            cout<<0<<endl;
            continue;
        }

        vector<ll> rem;
        for(int i=0; i<n/2; i++) {
            ll diff = llabs(arr[i] - arr[n - i - 1]);
            rem.push_back(diff);
        }

        ll res = rem[0];
        for(int i=1; i<rem.size(); i++) {
            res = gcd(res, rem[i]);
        }

        cout<<res<<endl;
    }
    return 0;
}