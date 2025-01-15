#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

// B. Kalindrome Array
// https://codeforces.com/problemset/problem/1610/B

void solve() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    int i=0, j=n-1, flag = 1;
    while(i < j) {
        if(arr[i] != arr[j]) {
            flag = 0;
            break;
        }
        i++;
        j--;
    }

    if(flag) {
        cout<<"YES\n";
        return;
    }

    flag = 1;
    int si = i, sj = j;
    while(i < j) {
        if(arr[i] == arr[j]) {
            i++;
            j--;
        }
        else {
            if(arr[i] == arr[si]) {
                i++;
            }
            else if(arr[j] == arr[si]) {
                j--;
            }
            else {
                flag = 0;
                break;
            }
        }
    }
    if(flag) {
        cout<<"YES\n";
        return;
    }

    flag = 1;
    i = si, j = sj;
    while(i < j) {
        if(arr[i] == arr[j]) {
            i++;
            j--;
        }
        else {
            if(arr[i] == arr[sj]) {
                i++;
            }
            else if(arr[j] == arr[sj]) {
                j--;
            }
            else {
                cout<<"NO\n";
                return;
            }
        }
    }

    cout<<"YES\n";
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