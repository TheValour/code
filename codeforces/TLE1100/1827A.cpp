#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll; 
const ll MOD = 1e9 + 7;

// A. Counting Orders
// https://codeforces.com/problemset/problem/1827/A

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;

        vector<ll> arr(n), vrr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> vrr[i];
        }

        sort(arr.begin(), arr.end()); 
        sort(vrr.begin(), vrr.end()); 

        ll res = 1;
        for(int i=n-1, j=n-1, cnt = 1; i>=0; i--, cnt++) {
            while(j >= 0 && arr[j] > vrr[i]) {
                j--;
            }

            res *= n - j - cnt;
            res %= MOD;
        }

        cout<<res<<endl;
    }
    return 0;
}