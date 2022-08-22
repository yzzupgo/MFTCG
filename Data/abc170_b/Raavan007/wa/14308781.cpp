#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define vl vector
using namespace std;
int main()
{
ll a,b;
cin>>a>>b;
ll l=a,r=0;
for(ll i=0;i<=a;i++)
{
if(b==(l*2)+(r*4))
{
cout<<"Yes";
return 0;
}
l--;
r++;
}
cout<<"NO";
return 0;
}
