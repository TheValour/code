#include <iostream>
using namespace std;

// C. Quests
// https://codeforces.com/problemset/problem/1914/C

void solve(int *arr, int *brr, int n, int k) {
    int sum = 0, MAX = 0, prevMAX = 0, curr;
    
    for(int i=0; i<n && i < k; i++) {
        sum += arr[i];
        prevMAX = max(brr[i], prevMAX);
        curr = sum + prevMAX*(k-i - 1);
        
        MAX = max(MAX, curr);
    }

    cout<<MAX<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int a, k;
        cin>>a>>k;
        int arr[a], brr[a];
        for(int i=0; i<a; i++) cin>>arr[i];
        for(int i=0; i<a; i++) cin>>brr[i];
        solve(arr, brr, a, k);
    }

    return 0;
}