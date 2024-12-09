#include <iostream>
#include <string>
using namespace std;

//      A. Red Versus Blue
// https://codeforces.com/problemset/problem/1659/A

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, r, b;
        cin>>n>>r>>b;

        int diff = r - (b + 1);
        int each = diff/(b + 1) + 1, special = diff%(b + 1);
        string res = "";

        int i = 0;
        while(i < n) {
            res += string(each, 'R');
            i += each;
            
            if(special) {
                res += 'R';
                i++;
                special--;
            }

            if(i == n) break;
            res += 'B';
            i++;
        } 

        cout<<res<<endl;
    }
    return 0;
}