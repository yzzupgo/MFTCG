#include<bits/stdc++.h>
using namespace std;
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define fwd(i,a,n) for(int i=a;i<=n;i++)
#define bak(i,a,n) for(int i=a;i>=n;i--)
#define all(v) v.begin(),v.end()
#define pb push_back
#define lop '\n'
#define mp make_pair
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef pair<int,int> pi;
typedef set<int> si;
const ll mod = 1e9 + 7;
const ll mod1=998244353;
ull power(ull x,ull y){
if(y==0) return 1;
else{
if(y%2==0) return power(x*x,y/2);
else return x*power(x*x,(y-1)/2);
}
}
ll mod_power(ll x, ll y, ll m)
{
ll r = 1;
x = x % m;
if (x == 0) return 0;
while (y > 0)
{
if (y & 1)
r = (r*x) % m;
y = y/2;
x = (x*x) % m;
}
return r;
}
ull gcd(ull x,ull y){
if(y==0)return x;
return gcd(y,x%y);
}
vector<ll>extended_Euclid(ll a,ll b){
vector<ll>v(3);
if(b==0){
v[0]=a;v[1]=1;v[2]=0;
return v;
}
else{
vector<ll>v1 = extended_Euclid(b,a%b);
v[0]=v1[0];
v[1]=v1[2];
v[2]=v1[1]-(a/b)*v1[2];
return v;
}
}
int main(){
boost;
int TESTS=1;
while(TESTS--){
int a,b;
cin>>a>>b;
if(b>=2*a && b<=4*a)cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
}
