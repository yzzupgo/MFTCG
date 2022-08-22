#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pi 3.141592653589793238
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MOD 1000000007
int main()
{
	fast;
	ll arr[5],diff[5]{},sum=0,cnt=0;
	for(int i=0;i<5;i++)
		cin>>arr[i],diff[i]=arr[i]%10;
	sort(diff,diff+5);
	for(int i=0;i<5;i++)
		if(arr[i]%10==0)
			cnt++;
	for(int i=0;i<5;i++)
		sum+=arr[i]-arr[i]%10;
	for(int i=4;i>cnt;i--)
		if(diff[i]!=0)
			sum+=10;
	if(cnt!=5)
	cout<<sum+diff[cnt];
	else
	cout<<sum;
	return 0;
}
