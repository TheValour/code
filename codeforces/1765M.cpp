#include <iostream>
using namespace std;

//      M. Minimum LCM
// https://codeforces.com/problemset/problem/1765/M

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        
        int a = 1;
        for(int i=2; i*i <= n; i++) {
            if(n%i == 0) {
                a = n/i;
                break;
            }
        }
        
        cout<<a<<" "<<n-a<<endl;
    }
}