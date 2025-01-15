#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

// B. 250 Thousand Tons of TNT
// https://codeforces.com/problemset/problem/1899/B

typedef long long LL;
typedef pair<int, int> PII;
typedef pair<long long, long long> PLL;

LL util(vector<int> &nums, int sz) {
    long long maxi = 0, mini = 1e18, curr = 0;

    int temp = 0;
    for(int n : nums) {
        temp++;
        curr += n;

        if(temp == sz) {
            maxi = max(curr, maxi);
            mini = min(curr, mini);
            temp = 0;
            curr = 0;
        }
    }

    return maxi - mini;
}

LL solve(vector<int> &nums, int N) {
    LL i = 1, res = 0;

    while(i <= N) {
        if(N%i == 0) {
            LL curr = util(nums, i);
            res = max(curr, res);
        }

        i++;
    }

    return res;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        long long res = solve(arr, n);
        cout << res << endl;
    }

    return 0;
}