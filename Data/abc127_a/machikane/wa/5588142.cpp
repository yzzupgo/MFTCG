#include <bits/stdc++.h>
using namespace std;
using ll = long long;
constexpr double INF{1e9};
constexpr int MAGIC_PRIME{1000000000 + 7};
constexpr array<int, 4> dy{-1, 1, 0, 0};
constexpr array<int, 4> dx{0, 0, -1, 1};
constexpr int div_ru(int a, int b)
{
return (a - b + 1) / b;
}
ll pow_mod(ll b, ll e, ll m)
{
ll r = 1;
for (; e > 0; e >>= 1)
{
if (e & 1)
r = (r * b) % m;
b = (b * b) % m;
}
return r;
}
int main()
{
cin.tie(0);
ios::sync_with_stdio(false);
int a, b;
cin >> a >> b;
int ans = 0;
if (a >= 13)
ans = b;
else if (ans >= 6)
ans = b / 2;
else
ans = 0;
cout << ans << endl;
return 0;
}
