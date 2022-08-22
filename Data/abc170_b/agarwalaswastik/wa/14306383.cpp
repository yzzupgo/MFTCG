#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
int x,y;
cin>>x>>y;
if(((4*x) > y)&&(y%2 == 0))
{
int h = ((4*x)-y)/2;
if(h <= x)
{
cout<<"Yes";
}
else
{
cout<<"No";
}
}
else
{
cout<<"No";
}
return 0;
}
