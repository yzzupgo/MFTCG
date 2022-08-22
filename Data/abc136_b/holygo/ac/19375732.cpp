#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <tuple>
#include <map>
#include <cassert>
using namespace std;
typedef long long ll;
#define rep(i,n) for (ll i = 0; i < (ll)(n); i++)
#define repd(i,a,b) for (ll i = (ll)(a); i < (ll)(b); i++)
#define repdm(i,a,b) for (ll i = (ll)(a); i > (ll)(b); i--)
const ll INF = 1LL << 60;
const ll MOD = 1e9 + 7;
int main()
{
int N;
cin >> N;
int n = int(log10(N)) + 1;
int ans = 0;
repd(i, 1, n + 1)
{
if (i % 2 == 1)
{
if (i == n)
{
ans += N - pow(10, i - 1) + 1;
}
else
{
ans += pow(10, i) - pow(10, i - 1);
}
}
}
cout << ans << endl;
}
