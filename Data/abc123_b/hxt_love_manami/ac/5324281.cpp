#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+7;
int main()
{
	int a[5];int maxx=0;int sum=0;
	for(int i=0;i<5;i++) 
	{
		cin>>a[i];int tmp=a[i]%10;
		if(tmp<(a[maxx]%10) && tmp!=0) maxx=i;
	}
	for(int i=0;i<5;i++)
	{
		if(i==maxx) sum+=a[i];
		else 
		{
			sum+=((a[i]-1)/10+1)*10;
		}
	}
	cout<<sum<<endl;
 } 