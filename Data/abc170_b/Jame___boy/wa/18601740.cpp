#include "bits/stdc++.h"
using namespace std;
#define FI freopen("input.txt", "r", stdin)
#define FO freopen("output.txt", "w", stdout)
#define FasterIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int ui;
#define mem(ara,val) memset(ara, val, sizeof(ara));
#define pii pair<int,int>
#define pll pair<ll, ll>
#define mk make_pair
#define ff first
#define ss second
#define pb push_back
#define ppb pop_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define for0(i,n) for (int i = 0; i < (int)(n); ++i)
#define for1(i,n) for (int i = 1; i <= (int)(n); ++i)
#define dbg(x) cout << #x << " :: " << x << "\n"
#define dbg2(x,y) cout << #x << " :: " << x << " --> " << #y << " :: " << y << "\n"
#define endl '\n'
const double PI = acos(-1.0);
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
int dx4[]= {+1, -1, +0, +0};
int dy4[]= {+0, +0, +1, -1};
#define isValid(a,b,R,C) (0 <= a && a < R) && (0 <= b && b < C)
int dx8[] = {+0, +0, -1, +1, -1, -1, +1, +1};
int dy8[] = {-1, +1, +0, +0, -1, +1, -1, +1};
int dr[] = {-1, 1, -2, -2, -1, 1, 2, 2};
int dc[] = {-2, -2, -1, 1, 2, 2, 1, -1};
void test_case()
{
int n, legs;
cin >> n >> legs;
for(int i = 0; i <= n; ++i)
{
for(int j = 0; j <= n; ++j)
{
if( i * 2 + j * 4 == legs )
{
cout << "Yes" << endl;
return;
}
}
}
cout << "No\n";
}
int main()
{
#ifndef ONLINE_JUDGE
#endif
FasterIO
cout.precision(15); cout << fixed;
int T = 1;
for(int tc = 1; tc <= T; ++tc)
{
test_case();
}
return 0;
}
