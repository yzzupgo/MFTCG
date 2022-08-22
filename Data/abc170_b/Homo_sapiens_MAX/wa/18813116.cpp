#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define PI 2 * acos(0)
#define ones(n) __builtin_popcount(n)
#define FAST ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define debug(x) cerr << #x << " = " << x << '\n';
#define LOOP printf("LOOP!!")
#define INF 1e9
#define READ freopen("input.txt", "r", stdin)
#define PRINT freopen("output.txt", "w", stdout);
#define print(a,b) printf("Case %d: %lld\n", a, b)
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
const int MOD = 1000000007;
#define ll long long
#define MAX 1000009
#define TEST printf("Case %d: ", c++);
using namespace std;
int main(int argc, char *argv[])
{
FAST;
ll x, y;
cin >> x >> y;
if ((y / 4) + 1 == x)
{
cout << "Yes" << '\n';
}
else
cout << "No" << '\n';
return 0;
}
