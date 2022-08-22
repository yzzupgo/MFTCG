#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
ll x,y;
cin>>x>>y;
ll a=y-2*x;
ll a1=a/2;
ll b1=x-a1;
if(a%2!=0||a1<0||b1<0)
{cout<<"No";return 0;}
if(a1+b1==x&&4*a1+2*b1==y)
cout<<"Yes";
else
cout<<"No";
return 0;
}
