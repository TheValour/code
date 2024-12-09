#include <iostream>
#include <math.h>
using namespace std;

//      B. Numbers Box
// https://codeforces.com/problemset/problem/1447/B

int main() {
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;

        int t, cnt = 0, mini = 1001, sum = 0, flag = 1;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                cin>>t;
                if(t < 0) cnt++;
                else if(t == 0) flag = 0;

                sum += abs(t);
                mini = min(mini, abs(t));                
            }
        }
        if(cnt&1 && flag) cout<<sum - 2*mini<<endl;
        else cout<<sum<<endl;
    }
    return 0;
}