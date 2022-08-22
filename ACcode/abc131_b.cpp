#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[400];
	int n,L;
    cin >> n >> L;
    int sum=0;
    for(int i=1;i<=n;i++)
	{
		a[i]=L+i-1;
		sum+=a[i];
	}
	int sum1=sum;
	int ans;
	int cha=1e9;
	for(int i=1;i<=n;i++)
	{
		sum1=sum;
		sum1-=a[i];
		if(abs(sum1-sum)<cha)
		{
			ans=sum1;
			cha=abs(sum1-sum);
		}
	}
	
	cout<<ans<<endl;
 
	return 0;
}
 
