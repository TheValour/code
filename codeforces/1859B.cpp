#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;

// B. Olya and Game with Arrays

long long util(vector<vector<int>> &nums, int n) {
    long long res = 0;
    int mini = INT_MAX;
    
    for(int i=n-1; i>0; i--) {
        res += nums[i][0];
        
        mini = min(mini, nums[i][1]);
    }
    mini = min(nums[0][1], mini);
    res += mini;
    
    return res;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, m;
        cin>>n;
        vector<vector<int>> nums(n, vector<int>(2));
        
        for(int i=0; i<n; i++) {
           cin>>m;
           
           int firstMin = INT_MAX, secondMin = INT_MAX, t;
           for(int j=0; j<m; j++) {
               cin>>t;
               
               if(t < firstMin) {
                    secondMin = firstMin;  
                    firstMin = t;
                } 
                else if(t < secondMin) secondMin = t;
            }
            
            nums[i][1] = firstMin;
            nums[i][0] = secondMin;
        }
        
        sort(nums.begin(), nums.end());
        
        cout<<util(nums, n)<<endl;
    }
    return 0;
}