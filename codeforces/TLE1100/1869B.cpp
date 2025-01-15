#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <limits.h>

using namespace std;

// B. 2D Traveling
// https://codeforces.com/problemset/problem/1869/B

typedef long long ll;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k, src, dest;
        cin >> n>> k >> src >> dest;

        vector<int> x(n), y(n);
        for (int i = 0; i < n; i++) {
            cin>> x[i] >> y[i];
        } 

        src--, dest--;
        ll score = llabs(x[src] - x[dest]) + abs(y[src] - y[dest]);

        ll first = LLONG_MAX/2, second = LLONG_MAX/2;
        for(int i=0; i<k; i++) {
            first = min(first, llabs(x[src] - x[i]) + llabs(y[src] - y[i]));
            second = min(second, llabs(x[dest] - x[i]) + llabs(y[dest] - y[i]));
        }

        cout<<min(score, first + second)<<endl;
    }
    return 0;
}