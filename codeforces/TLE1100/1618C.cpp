#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

// C. Paint the Array
// https://codeforces.com/problemset/problem/1618/C

ll __gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void solve() {
    int n;
    cin>>n;
    ll arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    ll n1 = arr[0], n2 = arr[1];
    for(int i=2; i<n; i++) {
        if(i&1) {
            n2 = __gcd(n2, arr[i]);
        }
        else {
            n1 = __gcd(n1, arr[i]);
        }
    }

    int flag = 1;
    for(int i=1; i<n; i+=2) {
        if(arr[i]%n1 == 0) {
            flag = 0;
            break;
        }
    }
    if(flag) {
        cout<<n1<<endl;
        return;
    }
    flag = 1;
    for(int i=0; i<n; i+=2) {
        if(arr[i]%n2 == 0) {
            flag = 0;
            break;
        }
    }
    if(flag) {
        cout<<n2<<endl;
    }else {
        cout<<0<<endl;
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