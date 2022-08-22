#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
if(n*4<=m)
{
cout<<"No";
return 0;
}
int sum=n*4-m;
if(sum%2==0)
{
int c1=sum/2;
int t1=n-c1;
if(t1*4+c1*2==m)
{
cout<<"Yes";
return 0;
}
else
{
cout<<"No";
return 0;
}
}
else cout<<"No";
return 0;
}
