#include <iostream>
#include <algorithm>
using namespace std;

//          B. Triangles on a Rectangle
//      https://codeforces.com/problemset/problem/1620/B

int main() {
    int t;
    cin>>t;
    while(t--) {
        int x, y;
        long long res = 0;
        cin>>x>>y;

        for(int i=0; i<4; i++) {
            int n, temp;
            cin>>n;

            int maxi, mini;
            cin>>mini;
            for(int j=2; j<n; j++) cin>>temp;
            cin>>maxi;

            long long length = maxi - mini;
            if(i < 2) {
                res = max(res, length*y);
            } else {
                res = max(res, length*x);
            }
        }
        
        cout<<res<<endl;
    }
    return 0;
}