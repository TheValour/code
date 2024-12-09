#include <iostream>
#include <string>
#include <vector>
using namespace std;

// B. Erase First or Second Letter
//  https://codeforces.com/problemset/problem/1917/B

int util(string st, int N) {
    int arr[26] = {0};
    long long res = 0;

    for(int i=0; i<N; i++) {
        int curr = st[i] - 'a';
        if(arr[curr] == 0) {

            res += N-i;
        }
    }

    return res;
}

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        string st;
        cin>>st;

        cout<<util(st, n)<<endl;
    }
    return 0;
}
