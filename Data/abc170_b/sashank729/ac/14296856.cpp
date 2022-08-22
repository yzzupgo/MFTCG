#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
#define pb push_back
#define ll long long
int main()
{
int x,y;
cin>>x>>y;
if(y%2) cout<<"No\n";
else
{
y/=2;
int a,b;
b=y-x;
a=x-b;
if(a>=0&&b>=0) cout<<"Yes\n";
else cout<<"No\n";
}
}
