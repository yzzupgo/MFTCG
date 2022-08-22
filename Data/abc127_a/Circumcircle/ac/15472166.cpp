#include"bits/stdc++.h"
using namespace std;
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl "\n"
#define sp " "
#define int long long
#define PI 3.141592653589793
#define scanstr(s) cin>>ws; getline(cin,s);
void solve()
{
int a,b;
cin>>a>>b;
if(a<=5) cout<<0<<nl;
else if(a<13) cout<<b/2<<nl;
else cout<<b<<nl;
return ;
}
int32_t main()
{
FastIO;
solve();
return 0;
}
