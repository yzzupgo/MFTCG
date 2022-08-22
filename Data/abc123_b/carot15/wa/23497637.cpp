#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[5],b=0,e=0;
	for (int i=0;i<5;i++)
	{
		cin>>a[i];
		if (a[i]%10!=0)
		{
			b=b+((a[i]/10+1)*10);
			a[i]=a[i]%10;
			e++;
		}
		else {
			b=b+a[i];
			a[i]=999999;
		}
	}
	if (e!=0)
	b=b-10;
	sort(a,a+5);
	b=b+a[0];
	cout<<b;
}
