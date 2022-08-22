#include<stdio.h>
int main()
{
	int a[5],b[5],i,time=0,min,x;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		b[i]=a[i]%10;
	}
	min=9;
	for(i=0;i<5;i++)
		if(b[min]>=b[i]&&b[i]!=0)
			min=i;
	for(i=0;i<5;i++)
	{
		if(i!=min)
		{
			if(a[i]%10==0)
				time+=a[i];
			else
				time+=(a[i]/10+1)*10;
		}	
	}
	time+=a[min];
	printf("%d",time);
}