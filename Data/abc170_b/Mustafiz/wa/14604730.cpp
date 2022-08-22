#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m,p,p1,p2;
cin>>n>>m;
p=m/4;
p1=m/2;
p2=m%4;
if(m>4)
{
p=p+p2;
}
if(m%2==0 && p1>=n && p<=n)
{
cout<<"Yes";
}
else
{
cout<<"No";
}
}
