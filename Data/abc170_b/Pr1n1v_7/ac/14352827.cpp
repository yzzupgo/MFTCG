#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
if((x*4<y)||(x*2>y)||(y%2!=0))
{
cout<<"No";
}
else
{
cout<<"Yes";
}
return 0;
}
