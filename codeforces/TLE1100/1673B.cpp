#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

// B. A Perfectly Balanced String?
// https://codeforces.com/problemset/problem/1673/B

void solve() {
    string st;
    cin>>st;

    int arr[26], right = st.size(), left = 0, flag = 1;
    fill(arr, arr + 26, -1);

    for(int i=0; i<st.size(); i++) {
        if(arr[st[i] - 'a'] != -1) {
            // cout<<st[i];
            right = i - 1;
            break;
        }

        arr[st[i] - 'a'] = i;
    }

    // cout<<right<<endl;
    for(int i=right + 1; i<st.size(); i++) {
        if(st[i] != st[left]) {
            flag = 0;
            break;
        }
        else {
            left++;
        }

        if(left == right + 1) {
            left = 0;
        }
    }

    if(flag) {
        cout<<"YES\n";
    }
    else {
        cout<<"NO\n";
    }
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