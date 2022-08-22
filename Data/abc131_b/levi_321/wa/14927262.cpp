#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define nt _int128
#define fir first
#define sec second
#define slow_as_snail ios_base::sync_with_stdio(false) , cin.tie(NULL);
#define debug(x) cout<<x<<"\n";
#define debugged cout<<"debugged\n";
#define inf 0x3f3f3f3f
#define rall(v) v.rbegin(),v.rend()
#define all(v) v.begin(),v.end()
const ll mod = 1000000007;
#define mx 10000005
const ll mxi = 100005;
int main()
{
slow_as_snail;
ll n,l;
cin>>n>>l;
if(abs(l)>n)
{
if(l<0)
{
l = abs(l);
ll tm = l*(l+1)/2;
tm = -1*tm;
cout<<tm<<"\n";
ll tmp = (abs(l)-n+1) * (abs(l)-n+2)/2;
cout<< tm + tmp;
}
else
{
ll tm = l*(l+1)/2;
ll tmp = (abs(l)-n+1) * (abs(l)-n+2)/2;
cout<<tm - tmp;
}
}
else
{
if(l>0)
{
ll tm = l+n-1;
ll tmp = l*(l+1)/2;
cout<<tm*(tm+1)/2 - tmp;
}
else
{
l = abs(l);
ll tm = l*(l+1)/2;
ll tmp = (n-l-1)*(n-l)/2;
cout<<tmp-tm;
}
}
}
