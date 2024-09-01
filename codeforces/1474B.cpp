#include <iostream>
#include <math.h>
using namespace std;

// B. Different Divisors
// https://codeforces.com/problemset/problem/1474/B

int main() {
    int t;
    cin>>t;
    while(t--){
        int d, a, b;
        cin>>d;

        for(int i=d+1; ; i++) {
            int flag = 1;
            for(int j = 2; j*j <= i; j++) {
                if(i%j == 0) {
                    flag = 0;
                    break;
                }
            }

            if(flag) {
                a = i;
                break;
            }
        }
        for(int i=d+a; ; i++) {
            int flag = 1;
            for(int j = 2; j*j <= i; j++) {
                if(i%j == 0) {
                    flag = 0;
                    break;
                }
            }

            if(flag) {
                b = i;
                break;
            }
        }

        cout<<1ll*a*b<<endl;
    }
    return 0;
}