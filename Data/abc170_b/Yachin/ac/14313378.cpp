#include <bits/stdc++.h>
using namespace std;
int main()
{
std::ios::sync_with_stdio(false);
std::cin.tie(0);
int x,y,b;
bool k;
cin>>x>>y;
b=y-2*x;
if(b%2)
{
k=0;
}
else
{
b/=2;
if(b>x||b<0)
{
k=0;
}
else
{
k=1;
}
}
if(k)cout<<"Yes\n";
else cout<<"No\n";
return 0;
}
