#include <bits/stdc++.h>
using namespace std;
#define END '\n'
#define int long long
#define pb push_back
#define pii pair<int, int>
#define ff first
#define ss second
#define trace(x) cerr<<x<<END;
#define loop(i,a,b) for(int i = (a); i < (b); i++)
#define loopb(i,b,a) for(int i = (b); i > (a); --i)
const int mod = 1e9+7;
const int mod1 = 998244353;
const int inf = 9223372036854775807ll;
void solve()
{
int x,y;
cin>>x>>y;
if(y>=2*x && (y - 2*x) % 2 == 0)
cout<<"Yes";
else
cout<<"No";
}
signed main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
solve();
return 0;
}
