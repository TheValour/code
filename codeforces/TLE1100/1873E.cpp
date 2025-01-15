#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <limits.h>
using namespace std;

// E. Building an Aquarium
// https://codeforces.com/problemset/problem/1873/E

typedef long long ll;

ll util(vector<int> &nums, int mid) {
    ll total = 0;
    for(int n : nums) {
        total += max(0, mid - n);
    }
    // cout<<mid<<" "<<total<<endl;
    return total;
}
ll solve(vector<int> &nums, int N, int W) {
    ll left = 1, right = 3 * INT_MAX, res = -1;

    while(left <= right) {
        ll mid = left + (right - left)/2;

        if(util(nums, mid) <= W) {
            left = mid + 1;
            res = mid;
        }
        else {
            right = mid - 1;
        }
    }
    return res;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, w;
        cin >> n>> w;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        cout<<solve(arr, n, w);
        cout<<endl;
    }
    return 0;
}