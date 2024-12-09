#include <iostream>
#include <string>
using namespace std;

//      C. Move Brackets
// https://codeforces.com/problemset/problem/1374/C

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string st;
        cin>>st;
        int op = 0, cls = 0, res = 0;
        for(char ch :st) {
            if(ch == '(') op++;
            else {
                cls++;
                if(cls > op + res)  res++;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}