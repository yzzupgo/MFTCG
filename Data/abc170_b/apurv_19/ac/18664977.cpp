#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define all(x) x.begin(),x.end()
#define pb emplace_back
#define pob pop_back()
#define ms0(s) memset(s,0,sizeof s)
#define ff first
#define ss second
typedef long long int ll;
#define vll vector<ll>
#define vpll vector<pair<ll,ll>>
#define vvll vector<vector<ll>>
#define pll pair<ll,ll>
#define prq priority_queue<ll>
#define psq priority_queue<ll,vector<ll>,greater<ll>>
#define m_p make_pair
#define vcc vector<char>
#define vss vector<string>
#define bs binary_search
#define lb lower_bound
#define ub upper_bound
#define setbit(n) __builtin_popcountll(n)
const ll mxn = 0;
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t = 1;
while (t--)
{
ll i, j, k, n, m;
ll x, y;
cin >> x >> y;
if ((y - 2 * x) % 2 == 0 && (y - 2 * x) >= 0)
{
k = (y - 2 * x) / 2;
j = x - k;
if (k >= 0 && j >= 0 && (2 * j + 4 * k == y) )
cout << "Yes";
else
cout << "No";
}
else
cout << "No";
}
return 0;
}
