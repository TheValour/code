#include <iostream>
#include <string>
using namespace std;

// A. Reverse a Substring
// https://codeforces.com/problemset/problem/1155/A

int main() {
    int n;
    cin>>n;
    string st;
    cin>>st;
    char prev = 'A';
    int s = -1, e = -1;

    for(int i=0; i < st.size(); i++) {
        if(prev <= st[i]) {
            s = i;
            prev = st[i];
        }
        else {
            e = i;
            break;
        }
    }    
    if(e == -1) cout<<"No"<<endl;
    else {
        cout<<"Yes"<<endl;
        cout<<s + 1<<" "<<e + 1<<endl;
    }
    return 0;
}