#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// A. Helmets in Night Light

long long util(vector<vector<int>> &nums, int cost, int n) {
    long long sum = cost;
    int total = 1;

    for (int i = 0; i < n && total < n; i++) {
        if (nums[i][0] > cost) {
            sum += cost;
            total++;
        } else if (total + nums[i][1] > n) {
            int t = n - total;
            sum += (long long)t * nums[i][0];
            total += t;
        } else {
            sum += (long long)nums[i][1] * nums[i][0];
            total += nums[i][1];
        }
    }

    return sum;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, cost;
        cin >> n >> cost;

        vector<vector<int>> nums(n, vector<int>(2));
        for (int i = 0; i < n; i++) {
            cin >> nums[i][1];
        }
        for (int i = 0; i < n; i++) {
            cin >> nums[i][0];
        }
        sort(nums.begin(), nums.end());

        cout << util(nums, cost, n) << endl;
    }
    return 0;
}
