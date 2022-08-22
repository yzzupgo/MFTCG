#include <bits/stdc++.h>
typedef long long ll;
#define forn(i,start,end) for (ll i = start; i < ll(end); i++)
#define input(arr,n) forn(i, 0, n) cin >> arr[i];
#define MOD 1000000007
#define vll vector<ll>
#define vpll vector<pair<ll, ll>>
#define vvll vector<vector<ll>>
#define mll map<ll, ll>
#define mcl map<char, ll>
#define sc set<char>
#define sll set<ll>
#define ssll stack<ll>
#define CHK(param) cout << #param << " is : " << param << "\n";
#define pb push_back
#define ppb pop_back
#define mk make_pair
#define f first
#define s second
#define all(x) (x).begin(), (x).end()
#define LAUV \
ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define TC \
ll TTTT; \
cin >> TTTT; \
while (TTTT--)
using namespace std;
int32_t main()
{
LAUV;
{
ll x, y;
cin >> x >> y;
forn(i, 1, x + 1)
{
ll t = x - i;
if (2 * x + 4 * t == y)
{
cout << "Yes\n";
return 0;
}
}
cout << "No\n";
}
return 0;
}
