#include <iostream>
using namespace std;

//      B. Fair Numbers
// https://codeforces.com/problemset/problem/1411/B

bool util(long long n) {
    long long t = n;
    while(t) {
        int rem = t%10;
        if(rem && n%rem != 0) return true;

        t /= 10;
    }
    return false;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;

        while(util(n)) n++;
        cout<<n<<endl;
    }
    return 0;
}