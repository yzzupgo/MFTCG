#include <iostream>
#include <iomanip>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
using T = tuple<int,int,int>;
#define eb emplace_back
#define pb push_back
#define MP make_pair
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i,j,n) for (int i = j; i < n; ++i)
#define repn(i,j,n) for (int i = j; i <= n; ++i)
#define revn(i,j,n) for (int i = j; i >= n; --i)
#define sz(i) i.size()
#define mem(i,v) memset(i,v,sizeof(i))
#define all(v) v.begin(), v.end()
#define endl '\n'
#define INF 1e9
#define ss second
#define ff first
typedef long long ll;
typedef long double ld;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;
typedef pair<int,pair<int,int>> piii;
string to_string(string s) { return '"' + s + '"';}
string to_string(char s) { return string(1, s);}
string to_string(const char* s) { return to_string((string) s);}
string to_string(bool b) { return (b ? "true" : "false");}
template <typename A> string to_string(A);
template <typename A, typename B>string to_string(pair<A, B> p) {return "(" + to_string(p.first) + ", " + to_string(p.second) + ")";}
template <typename A> string to_string(A v) {bool f = 1; string r = "{"; for (const auto &x : v) {if (!f)r += ", "; f = 0; r += to_string(x);} return r + "}";}
void debug_out() { cerr << endl; }
template <typename Head, typename... Tail> void debug_out(Head H, Tail... T) {cerr << " " << to_string(H); debug_out(T...);}
#define pr(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
const int mod=1e9+7;
const int up=1e5+10;
const int MAXN=1e5+10;
int32_t main()
{
int x,y;
cin>>x>>y;
if(y>=2*x && (y-2*x)%2==0)
{
int p=(y-2*x)/2;
if(x>=p)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
else
{
cout<<"No"<<endl;
}
}
