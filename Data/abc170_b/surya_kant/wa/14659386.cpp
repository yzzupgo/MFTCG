#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b;cin>>a>>b;
for(int i=0;i<=a;++i)
{
for(int j=0;i+j<=a;++j)
{
if(2*i+4*j==b)
{
cout<<"Yes\n";
return 0;
}
}
}
cout<<"No\n";
}
