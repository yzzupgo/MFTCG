#include <bits/stdc++.h>
using namespace std;
bool comp(int a,int b)
{
	a=a%10?a%10:10;
	b=b%10?b%10:10;
	return a>b;
}
int main()
{
	int a[5];
	for(int i=0;i<5;i++)cin>>a[i];
	sort(a,a+5,comp);
	int ans=0;
	for(int i=0;i<4;i++)ans+=ceil(a[i]/10.0)*10;
	ans+=a[4];
	cout<<ans<<endl;
	return 0;
}