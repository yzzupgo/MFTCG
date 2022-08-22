#include<bits/stdc++.h>
using namespace std;
#define MP make_pair
#define PB push_back
#define f first
#define s second
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef vector<int> vi;
const int MOD = 1000000007;
const int INF = 1000000007;
ll modx(ll a)
{
return (a%MOD+MOD)%MOD;
}
ll times(ll a, ll b)
{
return modx(modx(a)*modx(b));
}
ll add(ll a, ll b)
{
return modx(modx(a)+modx(b));
}
ll sub(ll a, ll b)
{
return modx(MOD+modx(a)-modx(b));
}
ll fastExp(ll base, ll exp)
{
if(exp == 0LL)
{
return 1LL;
}
if(exp%2==0)
{
return fastExp(times(base, base), exp/2);
}
else
{
return times(exp, fastExp(times(base, base), exp/2));
}
}
const int MAXN = 51;
int N;
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
return 0;
}
