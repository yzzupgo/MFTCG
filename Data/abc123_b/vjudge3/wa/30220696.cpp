#include<bits/stdc++.h>
using namespace std;
int time(int n)
{
	while(n%10!=0)
	{
		n++;
	}
	return n;
}
int main()
{
	int a[5],ans=0,b[5],min=123;
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
		b[i]=a[i]%10;
		if(min>b[i]&&b[i]!=0)min=b[i];
	}
	
	for(int i=0;i<5;i++)
	{
		ans+=time(a[i]);
	}
	ans-=(10-min);
	cout<<ans<<endl;
}