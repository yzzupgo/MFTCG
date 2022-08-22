#include <bits/stdc++.h>
#define ff first
#define ss second
#define ll long long
#define ld long double
#define pb push_back
#define eb emplace_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define ti tuple<int, int, int>
#define vi vector<int>
#define vl vector<ll>
#define vii vector<pii>
#define sws ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define teto(a,b) (((a)+(b)-1)/(b))
#define all(x) x.begin(), x.end()
#define forn(i,n) for(int i = 0; i < (int)n; i++)
#define forne(i,a,b) for(int i = a; i <= b; i++)
#define dbg(msg,var) cerr << msg << " " << var << endl;
using namespace std;
const int MAX = 1e4+10;
const ll MOD = 1e9+7;
const int INF = 0x3f3f3f3f;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const ld EPS = 1e-8;
const ld PI = acos(-1);
int32_t main()
{sws;
int x, y;
cin >> x >> y;
int a = y-2*x;
if(a<0 or a%2!=0)
cout << "No\n";
else{
if(x-a/2>=0)
cout << "Yes\n";
else
cout << "No\n";
}
return 0;
}
