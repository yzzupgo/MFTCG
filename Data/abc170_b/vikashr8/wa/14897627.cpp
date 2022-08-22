#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
ll n,l;
cin>>n>>l;
if((4*n-l)%2==0 &&n>=(4*n-l)/2)
{
cout<<"Yes";
}
else
cout<<"No";
}
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
solve();
return 0;
}
