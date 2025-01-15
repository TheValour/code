#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

// G2. Subsequence Addition (Hard Version)
// https://codeforces.com/problemset/problem/1807/G2

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        sort(arr.begin(), arr.end());

        if (arr[0] != 1) { 
            cout << "NO\n";
            continue;
        }

        ll sum = 1; 
        bool valid = true;

        for (int i = 1; i < n; i++) {
            if (arr[i] > sum) { 
                valid = false;
                break;
            }
            sum += arr[i]; // Add current element to the sum
        }

        if (valid) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}