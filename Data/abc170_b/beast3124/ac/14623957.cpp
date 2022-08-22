#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll x,y;
cin>>x>>y;
for(ll i = 0;i<=x;i++)
{
ll b = x-i;
if(2*i + b*4 == y)
{
cout<<"Yes"<<endl;
return 0;
}
}
cout<<"No"<<endl;
}
