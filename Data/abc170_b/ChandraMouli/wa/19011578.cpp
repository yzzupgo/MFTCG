#include <bits/stdc++.h>
using namespace std;
int main()
{
int x,y; cin>>x>>y;
int a=x,b=0;
if(x<=y)
{
cout<<"No";
return 0;
}
while(a)
{
if(y == a*4+b*2)
{
cout<<"Yes";
return 0;
}
a--; b++;
}
cout<<"No\n";
}
