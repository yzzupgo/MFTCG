#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
long x,y;
cin>>x>>y;
if(4*x-y<0)
cout<<"No";
else
{
if((4*x-y)%2==0 && (4*x-y)/2<=x)
cout<<"Yes";
else
cout<<"No";
}
return 0;
}
