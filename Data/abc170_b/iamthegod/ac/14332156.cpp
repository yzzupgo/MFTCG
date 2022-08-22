#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
if(n==1&&m==4)
{
cout<<"Yes";
return 0;
}
if(n*4<m)
{
cout<<"No";
return 0;
}
int sum=n*4-m;
if(sum%2==0)
{
int c1=sum/2;
int t1=n-c1;
if(t1*4+c1*2==m&&t1>=0&&c1>=0)
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
