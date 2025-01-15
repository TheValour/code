#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;
typedef long long ll; 
const ll MOD = 1e9 + 7;

// B. JoJo's Incredible Adventures
// https://codeforces.com/problemset/problem/1820/B

int main() {
    int t;
    cin >> t;
    while (t--) {
        string st;
        cin>>st;

        ll N = st.size(), cnt = 0, maxi = 0;
        for(int i=0; i<2*N; i++) {
            if(st[i%N] == '1') {
                cnt++;
            }
            else {
                cnt = 0;
            }
            maxi = max(cnt, maxi);
        }
        if(maxi == 2*N) {
            cout<<N*N<<endl;
            continue;
        }
        
        ll res = 0;
        for(ll i=maxi, j=1; i>0; i--, j++) {
            res = max(res, i * j);
        }

        cout<<res<<endl;
    }
    return 0;
}