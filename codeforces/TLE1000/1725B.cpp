#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;

//  B. Basketball Together
// https://codeforces.com/problemset/problem/1725/B

int util(vector<int>&arr, int k) {
    int N = arr.size(), i = 0;
    
    while(N > 0) {
        int curr = k/arr[i] + 1;
        if(curr > N) break;
        
        N -= curr;
        i++;
    }
    
    return i;
}

int main() {
   
    int n, k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];
    sort(arr.begin(), arr.end(), greater<int>());
    
    cout<<util(arr, k)<<endl;

    return 0;
}