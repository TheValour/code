#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

//   B. Monsters

int main() {
    int t;
    cin>>t;
    while(t-- ){
        int n, k;
        cin>>n>>k;
        vector<int> nums(n);
        
        for(int i=0; i<n; i++) {
            cin>>nums[i];
            nums[i] %= k;
            
            if(!nums[i]) nums[i] = k;            
        }
        
        vector<int> res(n);
        // this funtion basically fill the vector with value starting with 0
        iota(res.begin(), res.end(), 0);
        
        
        stable_sort(res.begin(), res.end(),  [&](int i, int j) {
            return nums[i] > nums[j];  
        });
        
        for(int ele : res) cout<<ele+1<<" ";
        cout<<endl;
    }
    return 0;
}