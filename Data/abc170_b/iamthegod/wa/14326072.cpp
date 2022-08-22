#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
int x=n*4;
if(x>m&&(x-m)%2==0)
{
int s=(x-m)/2;
int c=n-s;
if(c*4+s*2==m)
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
cout<<"No";
return 0;
}
