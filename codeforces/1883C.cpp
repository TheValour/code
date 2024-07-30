#include <iostream>
using namespace std;

//C. Raspberries

// Function to count the number of even numbers in the array
int check(int *arr, int n) {
    int cnt = 0;
    for(int i=0; i<n; i++) {
        if(arr[i]%2 == 0) cnt++;
    }
    return cnt;
}

int util(int *arr, int n, int k) {
    int maxi = 0, flag = 0;
    
    for(int i=0; i<n; i++) {
        maxi = max(maxi, arr[i]%k);
        if(arr[i]%k == 0) flag = 1;
    }
    
    if(flag) return 0;
    
    if(k == 4) {
        int t = check(arr, n);
        if(t == 1) return 1;
        else if(t == 0) return k-maxi>1?2:1;
        else return 0;
    }
    
    return k-maxi;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, k;
        cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];
        
        cout<<util(arr, n, k)<<endl;
    }

    return 0;
}