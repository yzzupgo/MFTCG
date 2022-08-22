#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
int x,y,z,i,j,k;
int a,b;
cin>>x>>y;
if(2*x<=y && 4*x>=y && (y-2*x)%2==0 && (4*x-y)%2==0)
{
cout<<"Yes"<<endl;
}
else
{
cout<<"No"<<endl;
}
return 0;
}
