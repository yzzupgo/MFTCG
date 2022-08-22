#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y,t,f=0;
cin>>x>>y;
t=x;
while(t>=0)
{
if(t*2+f*4==y)
{
cout<<"Yes";
return 0;
}
t--;
f++;
}
cout<<"No";
return 0;
}
