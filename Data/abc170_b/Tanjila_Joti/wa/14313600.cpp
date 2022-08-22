#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll arr[100001];
int main()
{
ll x,y,chk1=0,chk2=0;
cin>>x>>y;
if(x*2==y || x*4==y)
cout<<"Yes"<<endl;
else
{
for(int i=0; i<x; i++)
{
chk1+=2;
for(int i=1; i<x; i++)
{
chk2+=4;
if(chk1+chk2==y)
{
cout<<"Yes"<<endl;
return 0;
}
}
chk2=0;
}
cout<<"NO"<<endl;
}
}
