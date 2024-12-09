#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//  C. Traffic Light
//  https://codeforces.com/problemset/problem/1744/C

int util(string st, char ch, int n) {
    int arr[n] = {0};
    int prevInd = -1;
    
    for(int i=n-1; i>=0; i--) {
        if(st[i] == 'g') prevInd = i;
        arr[i] = prevInd - i;
    }
    
    for(int i=n-1; i>=0; i--) {
        if(arr[i] >= 0) break;
        
        arr[i] = n - i + arr[0];
    }
    
    int res = 0;
    for(int i=0; i<n; i++){
        if(st[i] == ch)  
        res = max(res, arr[i]);
    }
    
    return res;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        char ch;
        string st;
        cin>>n>>ch>>st;
        
        cout<<util(st, ch, n)<<endl;
    }
    return 0;
}