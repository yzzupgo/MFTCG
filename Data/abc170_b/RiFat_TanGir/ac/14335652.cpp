#include<bits/stdc++.h>
using namespace std;
int main ()
{
long x,y,i,p,t;
cin>>x>>y;
if(y%2!=0)
{
cout<<"No"<<endl;
return 0;
}
i=4*x;
t=2*x;
p=i-y;
if(p>=0 && t<=y && (p%2==0||p%4==0)) cout<<"Yes"<<endl;
else cout<<"No"<<endl;
return 0;
}
