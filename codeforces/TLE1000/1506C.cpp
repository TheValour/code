#include <iostream>
#include <vector>
#include <math.h>
#include <string>
using namespace std;

//      C. Double-ended Strings
// https://codeforces.com/problemset/problem/1506/C


int util(string &a, string &b) {
    int N = a.size(), M = b.size();
    vector<vector<int>> dp(N+1, vector<int>(M+1, 0));
    int res = 0;

    for(int i=N-1; i>=0; i--) {
        for(int j = M - 1; j >=0; j--) {
            if(a[i] == b[j]) {
                dp[i][j] = dp[i+1][j+1] + 1;
                res = max(res, dp[i][j]);
            }
        }
    }

    return N + M - 2*res;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        string a, b;
        cin>>a>>b;
        cout<<util(a, b)<<endl;
    }
    return 0;
}