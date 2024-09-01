#include <iostream>
using namespace std;

// A. Johnny and Ancient Computer
// https://codeforces.com/problemset/problem/1362/A

int main() {
    int t;
    cin>>t;
    while(t--){
        long long a, b;
        cin>>a>>b;
        int res = 0;
        int c = 0;
        if(a < b) {
            while(a < b)  {
                a = a*2;
                c++;
            }
            res = c/3;
            c = c%3;
            res += c/2;
            c = c%2;
            res += c;
        }
        else {
            while(a > b && a%2 == 0) {
                a = a/2;
                c++;
            }
            res = c/3;
            c = c%3;
            res += c/2;
            c = c%2;
            res += c;
        }

        if(a == b)  cout<<res<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}