#include<bits/stdc++.h>
using namespace std;
#define V vector
typedef long long ll;
typedef unsigned long long ull;
typedef V<int> vi;
typedef V<ll> vll;
typedef V<string> vs;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
#define f(i,a) for(int i = 0 ; i < a ; i++)
#define fll(i,a) for(ll i = 1 ; i <= a ;i++)
#define forab(i,a,b) for(int i = a ; i < b ; i++)
#define prec(x) cout<<fixed<<setprecision(x)
#define ff first
#define ss second
#define INF 1000000000
#define pb push_back
#define mp make_pair
#define numberofdigits(x) floor(log10(x)) + 1
long long binpow(long long a, long long b) {
long long res = 1;
while (b > 0) {
if (b & 1)
res = res * a;
a = a * a;
b >>= 1;
}
return res;
}
void solve()
{
int x, y;
cin >> x >> y;
if (( x < (y / 4) ) || ( x > (y / 2)))
{
cout << "No\n";
return;
}
if (y % x == 0 && (y / x == 4 || y / x == 2))
{
cout << "Yes\n";
return;
}
if ((2 * (x - 1) + 4 == y) || (4 * (x - 1) + 2 == y))
{
cout << "Yes\n";
return;
}
cout << "No\n";
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int t = 1;
while (t--)
{
solve();
}
return 0;
}
