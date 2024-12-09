#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// B. Divan and a New Project
// https://codeforces.com/problemset/problem/1614/B

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, t;
        cin>>n;
        vector<pair<int, int>> arr;
        for(int i=0; i<n; i++)  {
            cin>>t;
            arr.push_back({t, i});
        }

        sort(arr.begin(), arr.end(), greater<pair<int, int>>());
        
        int res[n+1];
        res[0] = 0;
        int l = -1, r = 1;
        long long ans = 0;
        for(int i=0; i<n; i++) {
            if(i&1)  {
                res[arr[i].second + 1] = r;
                ans += (long long)arr[i].first * 2 * r;
                r++;
            }
            else {
                res[arr[i].second + 1] = l;
                ans += (long long)arr[i].first * 2 * (-l);
                l--;
            }
        }

        cout<<ans<<endl;
        for(int i=0; i<n+1; i++) cout<<res[i]<<" ";
        cout<<endl;       
    }
    return 0;
}