#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int a[5],ge[5],sum=0;
	for (int i=0; i<5; i++)
	{
		cin>>a[i];

		ge[i]=a[i]%10;
		if (ge[i]!=0)
		{
			sum+=a[i]/10*10+10;
		}
		else
		{
			sum+=a[i];
			ge[i]+=9;
		}
	}
	sort (ge,ge+5);
	int minv=ge[0];
	if (a[0]%10==0&&a[1]%10==0&&a[2]%10==0&&a[3]%10==0&&a[4]%10==0)
	{
		cout<<sum;
		return 0;
	}
	cout<<sum-(10-minv);

	return 0;
}