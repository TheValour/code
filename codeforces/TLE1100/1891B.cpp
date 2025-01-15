#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <limits.h>
using namespace std;

// B. Deja Vu
// https://codeforces.com/problemset/problem/1891/B

typedef long long LL;
typedef pair<int, int> PII;
typedef pair<long long, long long> PLL;

void solve(vector<int> &nums, vector<int> &vrr, int N, int M) {
    int mini = INT_MAX; 
    int used[33] = {0};

    for(int n : vrr) {
        if(mini < n || used[n]) {
            continue;
        }
        used[n] = 1;
        
        for(int i=0; i<N; i++) {
            if(nums[i]% (1ll << n) == 0) {
                nums[i] += (1ll << (n - 1));
            }
        }
        mini = n;
    }

    for(int n : nums) {
        cout<<n<<" ";
    }
    return;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n>> m;

        vector<int> arr(n), vrr(m);
        for (int i = 0; i < n; i++) cin >> arr[i];
        for (int i = 0; i < m; i++) cin >> vrr[i];

        solve(arr, vrr, n, m);
        cout<<endl;
    }
    return 0;
}