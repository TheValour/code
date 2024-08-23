#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

//      B. Beautiful Array
//  https://codeforces.com/problemset/problem/1715/B

int main() {
    int t;
    cin>>t;
    while(t--) {
        long long n, k, b, sum;
        cin>>n>>k>>b>>sum;
        vector<long long> arr(n, 0);
        
        arr[0] = k*b;
        sum -= k*b;
        
        if(sum < 0) cout<<"-1\n";
        else {
            for(int i=0; i<n; i++) {
                long long curr = min(k-1, sum);
                arr[i] += curr;
                sum -= curr;
            }
            if(sum > 0) cout<<"-1\n";
            else {
                for(long long a : arr) cout<<a<<" ";
                cout<<endl;
            }
        }
    }
    return 0;
}