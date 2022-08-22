#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pie 3.142857143
#define ll long long int
#define fr(i,a,n) for(ll i=a;i<n;i++)
#define vi vector<int>
#define vlli vector<ll>
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define fv(i,a) for(auto i:a)
#define sz(a) int((a).size())
#define all(c) (c).begin(),(c).end()
#define frv(i,c) for(auto i = c.begin(); i != c.end(); i++)
void solve()
{
ll x, y, t;
cin >> x >> y;
t = (4 * x ) - y;
if (t >= 0 && t % 2 == 0 && y > 1 && (t / 2) <= x)
cout << "Yes\n";
else
cout << "No\n";
}
int main() {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen ("output.txt", "w", stdout);
#endif
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
t = 1;
while (t--)
{
solve();
}
return 0;
}
