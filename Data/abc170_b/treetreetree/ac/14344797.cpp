#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y,j;
cin>>x>>y;
for(int i=0;i<=x;++i)
{
j=x-i;
if((i*4+j*2)==y)
{
cout<<"Yes";
return 0;
}
}
cout<<"No";
return 0;
}
