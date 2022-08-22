#include<bits/stdc++.h>
using namespace std;
int a[6],ans=0,mi=100;
int main(){
	for(int i=1;i<=5;i++){
		cin>>a[i];
		mi=min(mi,a[i]%10);
		ans+=(a[i]+9)/10*10;
//		cout<<(a[i]+9)/10*10<<endl;
	}
//	cout<<ans<<endl;
	cout<<(ans-(10-mi));
	return 0;
}