#include<bits/stdc++.h>
using namespace std;
	
int main(){
	int a[6];
	for(int i=1;i<=5;i++){
		scanf("%d",&a[i]);
	}
	int x=0;
	int m=10;
	for(int i=1;i<=5;i++){
		if(a[i]%10!=0&&a[i]%10<m){
			x=i;
			m=a[i]%10;
		}
	}
	int ans=0;
	for(int i=1;i<=5;i++){
		if(a[i]%10==0)
			ans+=a[i];
		else if(i!=x){
			ans+=(a[i]/10+1)*10;
			
		}
		else if(i==x)
			ans+=a[i];
			
	}
	printf("%d",ans);
}
