#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int i,j,k;
int N;
int a[6];
int cnt=0,re,minp,p=0;

int main()
{
	minp=9;
	for(i=0;i<5;i++)
	{
		cin>>a[i];
		re=a[i]%10;
		if(re==0)
			continue;
		if(re<minp)
		{	p=i;
			minp=re;
		}
		
	}
	for(i=0;i<5;i++)
	{
		if(i==p)
			continue;
		a[i]=(a[i]/10+1)*10;
	}
	int sum=0;
	for(i=0;i<5;i++)
		sum+=a[i];
	cout<<sum<<endl;	
		
}