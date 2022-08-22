#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
int x,y;
cin>>x>>y;
if((x==y||x==1) && (y%4==0||y%2==0))
cout<<"Yes";
else if(y>4*x || y&1||y<x)
cout<<"No";
else
cout<<"Yes";
}
