#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define mod 1000000007
using namespace std;
ll binpow(ll x,ll y) {ll res=1;while (y > 0){if(y&1)res=(res*x);y = y>>1;x=(x*x);}return res;}
ll binpowmod(ll x,ll y,ll p) {ll res=1;x=x%p;while (y > 0){if(y&1)res=(res*x)%p;y = y>>1;x=(x*x)%p;}return res;}
ll mod_inverse(ll n,ll p) {return binpowmod(n,p-2,p);}
ull gcd(ull x,ull y)
{
if(y==0)
return x;
return gcd(y,x%y);
}
bool comp(pair<int,int> x,pair<int,int> y)
{
if(x.first<y.first)
return true;
else if(x.first==y.first)
return x.second>y.second;
else
return false;
}
bool comp_pairs_by_s(pair<ll,ll> &x ,pair<ll,ll> &y)
{
return x.second<y.second;
}
bool isPowerOfTwo (ll x)
{
return x && (!(x&(x-1)));
}
class cmp
{
public:
bool operator()(pair<int,int> A,pair<int,int> B)
{
if(abs(A.first-A.second)==abs(B.first-B.second))
return A.first>B.first;
return abs(A.first-A.second)<abs(B.first-B.second);
}
};
void swap(int &x,int &y){
int temp=x;
x=y;
y=temp;
}
void solve()
{
int m,n;
cin>>n>>m;
if(m-2*n>=0 && 3*n-m>=0 && (m-2*n)%2==0 && (3*n-m)%2==0)
cout<<"Yes";
else
cout<<"No";
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
}
