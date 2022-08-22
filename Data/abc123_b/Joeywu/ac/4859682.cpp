#include<bits/stdc++.h>
using namespace std;
int a[6],ans=0,mi=10;
int main(){
	for(int i=1;i<=5;i++){
		cin>>a[i];
		if(a[i]%10==0){
			ans+=a[i];
		}else{
			ans+=a[i]+10-a[i]%10;
			mi=min(mi,a[i]%10);
		}
//		cout<<ans;
	}
	if(mi==10){
		cout<<ans;
	}else{
		cout<<ans+mi-10;
	}
	return 0;
}