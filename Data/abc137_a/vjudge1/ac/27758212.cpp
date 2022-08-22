#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)a.size()
#define eq(a,b) (fabs(a - b) < EPS)
#define md(a,b) ((a) % b + b) % b
#define mod(a) md(a, MOD)
#define _max(a,b) ((a) > (b) ? (a) : (b))
#define srt(a) sort(all(a))
#define mem(a,h) memset(a, (h), sizeof(a))
#define f first
#define s second
#define forn(i,n) for(int i = 0; i < n; i++)
#define fore(i,b,e) for(int i = b; i < e; i++)
#define forg(i,b,e,m) for(int i = b; i < e; i+=m)
#define index int mid = (b + e) / 2, l = node * 2 + 1, r = l + 1;
#define DBG(x) cerr<<#x<<" = "<<(x)<<endl
#define RAYA cerr<<"=============================="<<endl
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<int, int> ii;
typedef pair<pair<int, int>, int> iii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<ll> vll;
const int tam = 100010;
const int MOD = 1000000007;
const int MOD1 = 998244353;
const double DINF=1e100;
const double EPS = 1e-9;
const double PI = acos(-1);
int main()
{
ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int a, b;
cin>>a>>b;
cout<<max(a + b, max(a - b, a * b));
return 0;
}
