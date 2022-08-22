#include<bits/stdc++.h>
using namespace std;
#define CLR(a) memset(a,0,sizeof(a))
#define SET(a) memset(a,-1,sizeof(a))
#define nl "\n";
#define FIO ios_base::sync_with_stdio(false);cout.setf(ios::fixed);cout.precision(10);cout.tie(nullptr);cin.tie(nullptr);
int dx[] = { 0,0,1,-1,-1,-1,1,1 };
int dy[] = { 1,-1,0,0,-1,1,1,-1 };
template < class T> inline T biton(T n, T pos) { return n | ((T)1 << pos); }
template < class T> inline T bitoff(T n, T pos) { return n & ~((T)1 << pos); }
template < class T> inline T ison(T n, T pos) { return (bool)(n & ((T)1 << pos)); }
template < class T> inline T gcd(T a, T b) { while (b) { a %= b; swap(a, b); }return a; }
template <class T> inline T bigmod(T p, T e, T m) {
T ret = 1;
for (; e > 0; e >>= 1) {
if (e & 1) ret = (ret * p) % m; p = (p * p) % m;
} return (T)ret;
}
#define DEBUG
#ifdef DEBUG
#define debug(...) __f(#__VA_ARGS__, __VA_ARGS__)
template < typename Arg1 >
void __f(const char* name, Arg1&& arg1)
{
cerr << name << " is " << arg1 << std::endl;
}
template < typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args)
{
const char* comma = strchr(names + 1, ',');
cerr.write(names, comma - names) << " is " << arg1 << " | ";
__f(comma + 1, args...);
}
#else
#define debug(...)
#endif
void solve()
{
int n,m;
cin>>n>>m;
long long mn=n*2,mx=n*4;
if(m%2==1){
cout<<"NO"<<nl;
return;
}
if(m<mn ||m>mx){
cout<<"NO"<<nl;
return;
}
cout<<"YES"<<nl;
return;
}
int main()
{
FIO;
int t = 1;
while (t--)
{
solve();
}
return 0;
}
