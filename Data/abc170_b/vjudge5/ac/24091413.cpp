#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5+10;
void solve()
{
int a,b; cin>>a>>b;
if(b-2*a>=0 && (b-2*a)%2==0 && a-(b-2*a)/2>=0) puts("Yes");
else puts("No");
}
signed main()
{
int tt=1;
while(tt--)
{
solve();
}
}
