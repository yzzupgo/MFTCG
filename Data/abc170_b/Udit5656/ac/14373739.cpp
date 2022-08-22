#pragma GCC optimize("O3")
#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
#include<set>
#include<vector>
#include<sstream>
#include<queue>
#include <iomanip>
#include<unordered_set>
#include <stack>
#include <unordered_map>
#include <map>
#include<numeric>
constexpr auto INF = 9223372036854775807;
typedef long long int ll;
typedef unsigned long long int ull;
typedef unsigned long int ul;
#define f(i,a,b) for(ll i=(ll)a;i<(ll)b;i+=1)
#define rf(i,a,b) for(ll i=(ll)a;i>=(ll)b;i-=1)
#define endl '\n'
#define N 1000000007
#define M 998244353
#define all(x) x.begin(),x.end()
#define mkp(a,b) make_pair(a,b)
using namespace std;
inline int mex(unordered_set<int> st)
{
int m = 0;
while (st.find(m) != st.end())
{
m += 1;
}
return m;
}
inline int calculateGrundy(int n)
{
if (n == 1)
return 0;
unordered_set<int> mexi;
for (int i = 1; i <= sqrt(n); i += 1)
{
if (n % i == 0)
{
if (n / i != n)
mexi.insert(calculateGrundy(n / i));
mexi.insert(calculateGrundy(i));
}
}
return mex(mexi);
}
inline ll gcd(ll a, ll b)
{
if (b == 0)
return a;
return gcd(b, a % b);
}
ll power(ll x, ll y)
{
ll res = 1;
x = x % N;
if (x == 0) return 0;
while (y > 0)
{
if (y & 1)
res = (res * x) % N;
y = y >> 1;
x = (x * x) % N;
}
return res;
}
bool check(ll a)
{
ll count = 0;
while (a % 2 == 0)
{
a /= 2;
count += 1;
}
if (count > 1)
return false;
bool flag = true;
for (ll i = 3; i <= sqrt(a); i += 2)
{
if (a % i == 0)
{
flag = false;
break;
}
}
return flag;
}
ll sum(ll n)
{
return (n * (n + 1)) / 2;
}
int main()
{
ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
vector<ll> arr(5,0);
ll x,y;
cin>>x>>y;
if(y%2!=0)
cout<<"No";
else
{
if(y/2>=x && y/2-x<=x)
{
cout<<"Yes";
}
else
{
cout<<"No";
}
}
return 0;
}
