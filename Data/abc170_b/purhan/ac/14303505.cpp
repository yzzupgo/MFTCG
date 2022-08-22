#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define fo(i,a,b) for (int i=a; i<(b); i++)
#define forev(i,b,a) for (int i = (b)-1; i >= a; i--)
typedef long long int lli;
typedef long double ld;
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define endl "\n"
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
int main() {
fast;
int x, y; cin >> x >> y;
string ans = "No";
if (y % 2 == 0) ans = "Yes";
if (x * 4 < y) ans = "No";
if (x * 2 > y) ans = "No";
cout << ans;
return 0;
}
