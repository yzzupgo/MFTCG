#include <bits/stdc++.h>
using ll = long long;
using ld = long double;
#define rep(i,a,n) for(ll i = (a); i < (n); i++)
#define per(i,a,n) for(ll i = (n-1); i >= (a); i--)
#define F first
#define S second
#define endl "\n"
#define all(x) begin(x),end(x)
#define maxx(a,b) a = max(a, b)
#define minn(a,b) a = min(a, b)
#define db(x) cerr<<#x<<" = "<<x<<endl
#define N 1111111
#define mod 1000000007
#define rt return
#define inf 1234567891123456789ll
using namespace std;
#define error(args...) {string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args)
{
cerr<<*it<<" = "<<a<<endl;
err(++it, args...);
}
ll modlaber(ll a, ll m = mod)
{
rt ((a+m)%m+m)%m;
}
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int x,y; cin>>x>>y;
rep(i,1,101)
rep(j,1,101)
if(i+j == x && 2*i+4*j == y)
rt cout<<"Yes",0;
cout<<"No";
rt 0;
}
