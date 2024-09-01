#include <iostream>
using namespace std;

//      B. Roof Construction
// https://codeforces.com/problemset/problem/1632/B

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;

        int k = 0;
        while((1 << (k + 1)) <= n - 1) k++;
        int mid = (1 << k);
        for(int i=n-1; i >= mid; i--) cout<<i<<" ";
        for(int i=0; i < mid; i++) cout<<i<<" ";
        cout<<endl;
        
    }
    return 0;
}