#include<iostream>
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
#define pb(x) push_back(x)
#define gcd(a,b) __gcd(a,b)
#define all(v) v.begin(),v.end()
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int32_t main()
{
int x,y;
cin>>x>>y;
int count=0;
int x1=x;
while(x1--)
{
if(y%2==0)
{
y=y/2;
count++;
}
else if(y%4==0)
{
y=y/4;
count++;
}
}
if(count==x && y==1)
{
cout<<"Yes";
}
else
{
cout<<"No";
}
}
