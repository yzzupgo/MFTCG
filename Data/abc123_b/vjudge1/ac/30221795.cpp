#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[10],sum=0,sum1=0,min=10;
	for(int i=0;i<5;i++)
	cin>>a[i];
	for(int i=0;i<5;i++)
	{
		if(a[i]%10!=0){
			sum+=1;
			if(a[i]%10<min)min=a[i]%10;
		}
		
		sum1+=a[i]/10;
	}
	cout<<sum1*10+sum*10-10+min;
	
}