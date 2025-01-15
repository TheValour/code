#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

// F. Eating Candies
// https://codeforces.com/problemset/problem/1669/F

void solve() {
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int i=0, j = n - 1, maxi = 0;
    int left = 0, right = 0;

    while(i < j) {
        if(left < right) {
            left += arr[i];
            i++;
        }
        else {
            right += arr[j];
            j--;
        }

        if(left == right) {
            maxi = max(maxi, i + (n - j - 1));
        }
    }
    // cout<<left<<" "<<right<<" : "<<maxi<<endl;
    if(i == j) {
        if(left < right) {
            left += arr[i];
        }
        else{
            right += arr[i];
        }
        if(left == right){
            maxi = n;
        }
    }

    cout<<maxi<<endl;
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