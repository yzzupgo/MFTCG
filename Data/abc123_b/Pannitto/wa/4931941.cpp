#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
signed main(){
	int a[5];
	rep(i,5)cin>>a[i];
	int ans=0;
	rep(i,5){
		if(a[i]%10==0)ans+a[i];
		else ans+=a[i]/10*10+10;
	}
	cout<<ans<<endl;

	return 0;
}
