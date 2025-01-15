#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// C. Yarik and Array
// https://codeforces.com/problemset/problem/1899/C

int solve(vector<int> &nums, int N) {
    int curr = max(0, nums[0]), res = nums[0];
    int flag = 1;

    for(int n : nums) {
        if(n > 0) {
            flag = 0;
        }
        res = max(res, n);
    }
    if(flag) return res;

    for(int i=1; i<N; i++) {
        int a = nums[i - 1]&1, b = nums[i]&1;
        if(a^b) {
            curr += nums[i];
        }
        else {
            curr = nums[i];
        }
        
        curr = max(curr, 0);
        res = max(res, curr);
    }

    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        int res = solve(arr, n);
        cout << res << endl;
    }

    return 0;
}