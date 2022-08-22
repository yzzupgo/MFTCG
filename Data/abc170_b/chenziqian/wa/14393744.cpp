#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
if((y&1==0)&&x*4>=y&&x*2<=y)
cout<<"Yes";
else
cout<<"No";
return 0;
}
