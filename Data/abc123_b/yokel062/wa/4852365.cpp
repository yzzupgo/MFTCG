#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a[5], need=9;
	for(int i=0; i<5; i++)
	{
		cin>>a[i];
		if(a[i]%10!=0 && a[i]%10<=need%10)
			need=a[i];
	}
	//printf("need=%d\n",need);
	
	int sum=0,flag=1; 
	for(int i=0; i<5; i++)
	{
		if(flag&&a[i]==need)
		{
			sum+=a[i];
			flag=0;
		}
		else 
		{
			if(a[i]%10)
				a[i]=a[i]/10;
				a[i]=a[i]+1;
				sum+=a[i]*10; 			
		}
	}
	
	printf("%d",sum);
	return 0;
}