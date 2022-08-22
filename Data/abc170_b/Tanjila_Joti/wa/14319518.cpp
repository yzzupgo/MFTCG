#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll arr[100001];
int main()
{
ll x,y,chk1=1,chk2=1;
cin>>x>>y;
for(int i=1; i<=x; i++)
{
chk1=(i*2);
chk2=(x-i)*4;
if(chk1+chk2==y)
{
cout<<"Yes"<<endl;
return 0;
}
}
cout<<"No"<<endl;
}
