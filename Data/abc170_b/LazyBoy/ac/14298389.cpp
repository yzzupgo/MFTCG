#include <bits/stdc++.h>
#define pb push_back
#define vii vector<int>
#define task "RESORT"
#define pll pair<ll, ll>
#define pii pair< ll, pair< ll, ll > >
#define fi first
#define se second
using ll = long long;
using ld = long double;
using ull = unsigned long long;
const int mod = 1e9 + 7;
using namespace std;
const int N = 5005;
ll n, m, a[N], b[N], ma[N][N], k, T, tong, d[N][N], ans, t, s;
;
bool ck;
inline void sol()
{
cin >> n >> m;
for(int i = 0; i <= n; i ++)
{
if(m >= i * 2 && (m - i * 2) % 4 == 0 && (m - i * 2) / 4 + i == n)
{
cout << "Yes";
return;
}
}
cout << "No";
}
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
if(fopen(task".INP", "r"))
{
freopen(task".INP","r",stdin);
freopen(task".OUT","w",stdout);
}
sol();
}
