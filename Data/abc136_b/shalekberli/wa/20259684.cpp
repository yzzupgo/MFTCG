#include <bits/stdc++.h>
#define FREEELO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl '\n'
#define pb push_back
#define mp make_pair
#define INF 0x3F3F3F3F
#define sz(x) (int)x.size()
#define all(v) v.begin(), v.end()
#define F first
#define S second
#define MAX 10000000
#define mod 1000000007LL
#define MOD 998244353
#define ll long long
#define lld long double
#define usi unsigned int
#define pll pair<long long>
#define pii pair<int, int>
#define loop1(i,n) for (ll i = 1; i <= (n); i++)
#define loop0(i,n) for (ll i = 0; i < (n); i++)
#define loop(i,k,n) for(ll i = (k);i <= (n);i++)
#define loopr(i,k,n) for(ll i = (k);i >= (n);i--)
using namespace std;
int T;
int main()
{
FREEELO
int n, cnt = 0; cin >> n;
loop1(i, n)
{
string s = to_string(n);
if(sz(s) % 2 != 0) cnt++;
}
cout << cnt;
return 0;
}
