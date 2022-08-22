#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pi 3.141592653589793238
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
ll MOD=1e9+7;

void solve()
{

	ll a[5],sum=0;
	for(ll i=0;i<5;i++)
	{
		cin>>a[i];
		// cout<<(ceil(a[i]/10.0)*10);
		sum+=(ceil(a[i]/10.0)*10);
	}
	// cout<<sum<<endl;
	ll mn=1e9,f=0;
	for(ll i=0;i<5;i++)
	{
		// cout<<a[i]%10<<" ";
		if(a[i]%10!=0)
		{
			// cout<<"*";
			mn=min(mn,a[i]%10);	
			f=1;
		}
	}
	// cout<<mn;
	if(f==1)
		sum-=(10-mn);
	cout<<sum;
	return;
}

int main()
{
        fast;
        ll q;
        q=1;
        // cin>>q;
        while(q--)
        	solve();
        
        return 0;
}
