#include <bits/stdc++.h>
using namespace std;

//  B. Array merging
//  https://codeforces.com/problemset/problem/1831/B

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n + 1);
        vector<int> b(n + 1);
        for (int i = 1; i <= n; ++i) cin >> a[i];
        for (int i = 1; i <= n; ++i) cin >> b[i];
        
        vector<int> fa(n + n + 1);
        vector<int> fb(n + n + 1);
        
        int p = 1;
        for (int i = 2; i <= n; ++i) {
            if (a[i] != a[i - 1]) p = 1;
            else p++;
            fa[a[i - 1]] = max(fa[a[i - 1]], p);
        }
        fa[a[n]] = max(fa[a[n]], p);

        p = 1;
        for (int i = 2; i <= n; ++i) {
            if (b[i] != b[i - 1])   p = 1;
            else p++;
            fb[b[i - 1]] = max(fb[b[i - 1]], p);
        }
        fb[b[n]] = max(fb[b[n]], p);

        int ans = 0;
        for (int i = 1; i <= n + n; ++i) 
            ans = max(ans, fa[i] + fb[i]);

        cout << ans << '\n';
    }
}