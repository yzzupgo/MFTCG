#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define vi vector<int>
#define vl vector<ll>
#define si set<int>
#define ii pair<int,int>
#define f first
#define s second
#define pb push_back
#define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define sz(c) (int) (c).size()
#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()
#define db(x) cout << #x << ": " << x << endl
#define _db(c) for (auto x : c) cout << x << " "; cout << endl
#define forc(i,c) for (auto i = (c).begin(); i != (c).end(); ++i)
#define io ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define tc int t; cin >> t; while (t--)
ll MOD = 1000000007;
ll ans = 0;
ll a, b, i, j, m, n, x, y;
int main() {
io;
cin >> x >> y;
if (y%2 || y > 4*x) {
cout << "No";
return 0;
}
for (int i = y ; i >= 0 ; i -= 2, x--) {
if (i > 2*x) i -= 2;
if (x == 0 && i == 0) {
cout << "Yes"; return 0;
}
}
cout << "No";
}
