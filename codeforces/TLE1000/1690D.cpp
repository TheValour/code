#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//      D. Black and White Stripe
// https://codeforces.com/problemset/problem/1690/D

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, k;
        cin>>n>>k;
        string st;
        cin>>st;

        int i=0, cntW = 0;
        while(i < k) {
            cntW += (st[i] == 'W');
            i++;
        }
        int res = cntW;

        while(i < n) {
            cntW += (st[i] == 'W');
            cntW -= (st[i - k] == 'W');

            res = min(res, cntW);
            i++;
        }

        cout<<res<<endl;
    }
    return 0;
}