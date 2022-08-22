#include<iostream>
#include<algorithm> 
using namespace std;
int main()
{
	int a[5],b[5];
	int ans=0;
	for(int i=0;i<5;i++){
		cin>>a[i];
		if(a[i]%10==0)
			b[i]=100;
		else
			b[i]=a[i]%10;	
		ans+=(a[i]/10+1)*10;
	}
	sort(b,b+5);
	ans-=(10-b[0]);
	cout<<ans;
}