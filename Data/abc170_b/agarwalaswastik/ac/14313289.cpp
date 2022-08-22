#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
int x,y;
cin>>x>>y;
int h = x*2;
if(y<h)
{
cout<<"No";
}
else if(h == y)
{
cout<<"Yes";
}
else
{
int g = y-h;
if((g%2==0)&&((g/2)<=x))
{
cout<<"Yes";
}
else
{
cout<<"No";
}
}
return 0;
}
