#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;
typedef long long ll; 
const ll MOD = 1e9 + 7;

// B. Sort the Subarray
// https://codeforces.com/problemset/problem/1821/B

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n), vrr(n);
        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }
        for(int i=0; i<n; i++) {
            cin>>vrr[i];
        }
        
        int i=0, j = n - 1;

        while(j >=0 && arr[j] == vrr[j]) {
            j--;
        }
        while(i < n && arr[i] == vrr[i]) {
            i++;
        }

        int mini = vrr[i], maxi = vrr[j];

        while(i > 0 && mini >= arr[i - 1]) {
            mini = arr[i - 1];
            i--;
        }
        while(j < n - 1 && maxi <= arr[j + 1]) {
            maxi = arr[j + 1];
            j++;
        }

        cout<<i+1<<" "<<j+1<<endl;
    }
    return 0;
}