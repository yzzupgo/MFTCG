#include <bits/stdc++.h>
#define ff first
#define ss second
#define ll long long
#define ld long double
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define mt make_tuple
#define pii pair<int, int>
#define vi vector<int>
#define vl vector<ll>
#define vii vector<pii>
#define sws ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define teto(a,b) ((a+b-1)/(b))
using namespace std;
#define forn(i,n) for(int i = 0; i < (int)n; i++)
#define forne(i,a,b) for(int i = a; i <= b; i++)
#define all(x) x.begin(), x.end()
#define dbg(msg,var) cout << msg << " " << var << endl;
const int MAX = 500020;
const ll MOD = (int)1e9 +7;
const int INF = 1e9;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const ld EPS = 1e-7;
int32_t main() {
int x, y;
cin >> x >> y;
int qt = 0;
qt += y/4;
y = y - 4*(y/4);
qt += y/2;
y = y - 2*(y/2);
if(qt > x or y != 0) {
cout << "No" << endl;
}
else {
cout << "Yes" << endl;
}
return 0;
}
