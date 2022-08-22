#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
ll i,x,y,turt;
cin>>x>>y;
for(i=0; i<=x; i++)
{
turt=x-i;
if(2*i+4*turt==y)
return cout<<"Yes"<<endl,0;
}
cout<<"No"<<endl;
return 0;
}
