#include <iostream>
using namespace std;

//      B. Shoe Shuffling
// https://codeforces.com/problemset/problem/1691/B

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];

        int i = 0, flag = 0;
        while (i < n) {
            int freq = 0, j = i;
            while(j < n && arr[i] == arr[j]) {
                freq++;
                j++;
            }
            if(freq < 2) {
                flag = 1;
                cout<<-1<<endl;
                break;
            }
            i = j;
        }

        if(flag) continue;

        i=0;
        while(i < n) {
            int j = i + 1;
            while(j < n && arr[i] == arr[j]) {
                cout<<j + 1<<" ";
                j++;
            }
            cout<<i + 1<<" ";
            i = j;
        }     
        cout<<endl;
    }
    return 0;
}