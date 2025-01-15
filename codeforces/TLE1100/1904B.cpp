#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// B. Collecting Game
// https://codeforces.com/problemset/problem/1904/B

vector<int> solve(vector<int> &nums, int N) {
    vector<pair<int, int> > indexedNums(N);
    for (int i = 0; i < N; i++) {
        indexedNums[i] = make_pair(nums[i], i);
    }

    sort(indexedNums.begin(), indexedNums.end());

    vector<long long> preSum(N + 1, 0);
    for (int i = 0; i < N; i++) {
        preSum[i + 1] = preSum[i] + indexedNums[i].first;
    }

    vector<int> validEnd(N);
    validEnd[N - 1] = N; 

    for (int i = N - 2; i >= 0; i--) {
        if (preSum[i + 1] >= indexedNums[i + 1].first) {
            validEnd[i] = validEnd[i + 1];
        } else {
            validEnd[i] = i + 1;
        }
    }

    vector<int> result(N);
    for (int i = 0; i < N; i++) {
        int originalIndex = indexedNums[i].second;
        result[originalIndex] = validEnd[i] - 1;
    }

    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        vector<int> res = solve(arr, n);
        for (int i=0; i<n; i++) {
            cout << res[i] << " ";
        }
        cout << endl;
    }

    return 0;
}