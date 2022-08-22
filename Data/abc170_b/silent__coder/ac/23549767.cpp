#include<bits/stdc++.h>
#define rep(i) for(ll i=1;i<=5;i++)
using namespace std;
typedef unsigned int ui;
using ll=long long;
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int x,y;
cin>>x>>y;
int c,t,t1;
t=(y-(2*x))/2;
t1=(y-(2*x))%2;
if(t1 !=0)
{
cout<<"No"<<endl;
return 0;
}
c=x-t;
if(t>=0 && c>=0)
{
cout<<"Yes"<<endl;
}
else
cout<<"No"<<endl;
return 0;
}
