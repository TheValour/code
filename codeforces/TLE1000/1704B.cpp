#include <iostream>
using namespace std;

//      B. Luke is a Foodie
// https://codeforces.com/problemset/problem/1704/B

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, k;
        cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];

        int mini = arr[0], maxi = arr[0], res = 0;

        for (int i = 1; i < n; i++) {
            if (arr[i] > maxi) {
                maxi = arr[i];
            }
            if (arr[i] < mini) {
                mini = arr[i];
            }
            if (maxi - mini > 2 * k) {
                res++;
                mini = maxi = arr[i];
            }
        }
        cout<<res<<endl;
    }
    return 0;
}