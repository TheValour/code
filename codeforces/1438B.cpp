#include <iostream>
#include <unordered_map>
using namespace std;

//      B. Valerii Against Everyone
// https://codeforces.com/problemset/problem/1438/B

int main() {
    int t;
    cin>>t;
    while(t--){
        int n, flag = 0;
        cin>>n;
        int arr[n];
        unordered_map<int, int> mp;

        for(int i=0; i<n; i++) {
            cin>>arr[i];
            mp[arr[i]]++;
        }

        for(auto m : mp) {
            if(m.second > 1) {
                flag = 1;
                break;
            }
        }

        if(flag) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}