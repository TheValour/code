#include <iostream>
#include <algorithm>
using namespace std;

//      B. Bogosort
// https://codeforces.com/problemset/problem/1312/B

int main() {
    int t;
    cin >> t;
    while (t--) {
       int n;
       cin>>n;
       int arr[n];
       for(int i=0; i<n; i++) cin>>arr[i];
       sort(arr, arr+n, greater<int>());

       for(int i=0; i<n; i++) cout<<arr[i]<<" ";
       cout<<endl;
    }
    return 0;
}