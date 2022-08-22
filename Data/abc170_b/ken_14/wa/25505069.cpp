#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
int x,y;
cin>>x>>y;
bool ans = true;
if(y%2)
{
ans = false;
}
if(y<(2*x) || y>(4*x))
{
ans = false;
}
if(ans)
{
cout<<"YES\n";
}
else
{
cout<<"NO\n";
}
}
int main()
{
solve();
return 0;
}
