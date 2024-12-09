#include <iostream>
#include <string>
using namespace std;

//B. Swap and Delete

int util(string st) {
    int n = st.size(), zr = 0, on = 0, i;
    
    for(i=0; i<n; i++) {
        if(st[i] == '0') zr++;
        else on++;
    }
    for(i=0; i<n; i++) {
        if(st[i] == '1') {
            if(zr) zr--;
            else break;
        } 
        else {
            if(on) on--;
            else break;
        }
    }
    return n - i;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        string st;
        cin>>st;
        
        cout<<util(st)<<endl;
    }

    return 0;
}