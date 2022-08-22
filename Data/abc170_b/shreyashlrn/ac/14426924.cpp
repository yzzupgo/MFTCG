#include<bits/stdc++.h>
using namespace std;
#pragma comment(linker, "/STACK:16777216")
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define ull unsigned long long int
#define eb emplace_back
#define F first
#define S second
#define coutd(x) cout << fixed << setprecision(x)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define newl2 cout<<'\n';
#define newl '\n'
#define sz(x) (int)x.size()
#define clr(x) memset(x, 0, sizeof(x))
#define PI 3.1415926535897932384626
#define deb(x) cout << #x << "=" << x << endl;
#define deb2(x,y) cout << #x << "=" << x << "," << #y << "=" << y << endl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
ll toint(const string &s) {stringstream ss; ss << s; ll x; ss >> x; return x;}
string tostring ( ll number ){stringstream ss; ss<< number; return ss.str();}
template<typename T>
T toIntegralType(const string &str) {
static_assert(is_integral<T>::value, "Integral type required.");
T ret;
stringstream ss(str);
ss >> ret;
if ( to_string(ret) != str)
throw invalid_argument("Can't convert " + str);
return ret;
}
bool sortbysec(const pair<int,int> &a,
const pair<int,int> &b)
{
return (a.second < b.second);
}
bool sortbysecdesc(const pair<int,int> &a,
const pair<int,int> &b)
{
return a.second>b.second;
}
ll fast_power(ll a,ll x)
{
if(x==0) return 1;
else if(x==1) return a;
else { ll R = fast_power(a,x>>1);
if(!(x&1)) return R*R;
else return R*a*R; }
}
void solve()
{
int x,y; cin>>x>>y;
if(x==0)
{
if(y==0) cout<<"Yes";
else cout<<"No";
}
else
{
if(y%2==0)
if(y<=4*x && y>=2*x)
{
cout<<"Yes";
}
else
{
cout<<"No";
}
else cout<<"No";
}
}
int main()
{
fio;
srand(chrono::high_resolution_clock::now().time_since_epoch().count());
int t=1;
while(t--)
{
solve();
}
}
