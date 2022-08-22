#include<bits/stdc++.h>
using namespace std;
int a[6],ans=0,mi=11;
int flag=1;
int main(){
	for(int i=1;i<=5;i++){
		cin>>a[i];
		if(a[i]%10==0){
			flag=0;
			ans+=a[i];
		}else{
			ans+=a[i]+10-a[i]%10;
			mi=min(mi,a[i]%10);
		}
	}
	if(flag){
		cout<<ans-(10-mi);
	}else{
		cout<<ans;
	}
	return 0;
}