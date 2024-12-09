#include <iostream>
using namespace std;

//      A. Add and Divide
// https://codeforces.com/problemset/problem/1485/A

void solve(){
	long long A,B,res;
	cin>>A>>B;

	res=A+1;
	for(int i=(B==1?1:0); i<res; ++i){
		long long b = B+i, a=A, ans=i;
		while(a){
			a /= b;
			ans++;
		}
		if(ans<res)res=ans;
	}
	cout<<res<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
	return 0;
}