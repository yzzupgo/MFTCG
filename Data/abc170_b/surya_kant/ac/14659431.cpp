#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b;cin>>a>>b;
for(int i=0;i<=a;++i)
{
int j = a-i;
if(2*i+4*j==b)
{
cout<<"Yes\n";
return 0;
}
}
cout<<"No\n";
}
