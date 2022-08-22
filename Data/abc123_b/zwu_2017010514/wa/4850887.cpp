#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[5],k,maxn=10,ans=0;
	for(int i=0;i<5;i++){
		cin>>a[i];
		if(a[i]%10<maxn){
			maxn=a[i]%10;
			k=i;
		} 
	}
	for(int i=0;i<5;i++){
		if(i!=k){
			ans+=a[i]-a[i]%10;
			if(a[i]%10!=0) ans+=10;
		}
		else ans+=a[i];
	}	
	cout<<ans;
	return 0;
}