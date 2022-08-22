#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define int long long
#define mkp make_pair
#define pb push_back
#define ff first
#define ss second
#define debug1(a) cout<<a<<endl;
#define debug2(a,b) cout<<a<<' '<<b<<endl;
#define debug3(a,b,c) cout<<a<' '<<b<<' '<<c<<endl;
#define rep(i,n) for(int i=0;i<n;i++)
#define repre(i,a,b) for(int i=a;i<=b;i++)
#define clr1(arr) memset(arr,-1,sizeof(arr));
#define clr0(arr) memset(arr,0,sizeof(arr));
#define pi pair<int,int>
#define pii pair<int,pi>
#define aint(v) v.begin(),v.end()
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace __gnu_pbds;
using namespace std;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> orderedSet;
typedef tree<int,null_type,less_equal<int>,rb_tree_tag,tree_order_statistics_node_update> orderedMSet;
struct custom_hash {
static uint64_t splitmix64(uint64_t x) {
x += 0x9e3779b97f4a7c15;
x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
return x ^ (x >> 31);
}
size_t operator()(uint64_t x) const {
static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
return splitmix64(x + FIXED_RANDOM);
}
};
#define ump gp_hash_table<int,int,custom_hash>
int power(int x,int y);
bool isPrime(int n);
int modInv(int a,int b);
int gcdExtended(int a,int b,int *x,int* y);
int mpower(int a,int b,int p);
int32_t main()
{
fastio
int x,y;
cin>>x>>y;
if(y%2!=0)
{
cout<<"No\n";
exit(0);
}
repre(i,0,x)
{
int j=x-i;
int temp=2*i + 4*j;
if(temp==y)
{
cout<<"Yes\n";
exit(0);
}
}
cout<<"No\n";
return 0;
}
int modInv(int a, int m)
{
int x, y;
int g = gcdExtended(a, m, &x, &y);
int res = (x%m + m) % m;
return res;
}
int gcdExtended(int a, int b, int *x, int *y)
{
if (a == 0){
*x = 0, *y = 1;
return b;
}
int x1, y1;
int gcd = gcdExtended(b%a, a, &x1, &y1);
*x = y1 - (b/a) * x1;
*y = x1;
return gcd;
}
int mpower(int x, int y, int p)
{
int res = 1;
x = x % p;
while(y > 0){
if(y & 1) res = (res*x) % p;
y = y>>1;
x = (x*x) % p;
}
return res;
}
int power(int x, int y)
{
int res = 1;
while (y > 0){
if (y & 1) res = res*x;
y = y>>1;
x = x*x;
}
return res;
}
bool isPrime(int n)
{
if (n <= 1) return false;
if (n <= 3) return true;
if (n%2 == 0 || n%3 == 0) return false;
int p=sqrt(n);
for(int i=5;i<=p;i=i+6)
if (n%i == 0 || n%(i+2) == 0)
return false;
return true;
}
