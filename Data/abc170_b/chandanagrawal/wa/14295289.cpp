#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define MAX 100050
#define ll long long
#define ld long double
#define lli long long int
#define pb emplace_back
#define INF 1000000000
#define mod 1000000007
#define PI acos(-1)
#define dsin(degree) sin(degree*(PI/180.0))
#define dcos(degree) cos(degree*(PI/180.0))
#define dtan(degree) tan(degree*(PI/180.0))
#define rsin(radian) sin(radian)
#define rcos(radian) cos(radian)
#define rtan(radian) tan(radian)
#define loop(i,n) for (lli i = 0; i < n; i++)
#define loopitr(xt,vec) for (auto xt : vec)
#define FOR(i,a,b) for (lli i = a; i < b; i+=1)
#define loop_rev(i,n) for (lli i = n-1; i >= 0; i--)
#define FOR_REV(i,a,b) for (lli i = a; i >= b; i--)
#define itr :: iterator it
#define WL(t) while(t --)
#define all(v) v.begin(),v.end()
#define sz(x) int(x.size())
#define F first
#define S second
#define mii map<lli,lli>
#define vi vector<lli>
#define seti set<lli>
#define pii pair<lli,lli>
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) (a/gcd(a,b))*b
#define abs(x) ((x < 0)?-(x):x)
template <typename T>
void print(T x){cout<<x<<endl;}
template <typename T1, typename T2>
void print2(T1 x,T2 y){cout<<x<<" "<<y<<endl;}
template <typename T1, typename T2,typename T3>
void print3(T1 x, T2 y,T3 z){cout<<x<<" "<<y<<" "<<z<<endl;}
#define scanarr(a,n) for(lli i=0;i<n;i++) cin>>a[i];
#define scanvector(a,n) for(lli i=0;i<n;i++){ lli x ; cin>>x; a.push_back(x);}
#define printarr(a,n) for(lli i=0;i<n;i++) cout<<a[i]<<" "; cout<<endl;
#define printvector(vec) for(auto xt : vec) cout<<xt<<" "; cout<<"\n";
#define printset(st) for(auto xt : st) cout<<xt<<" "; cout<<"\n";
#define FD(N) fixed<<setprecision(N)
#define endl '\n'
#define deb(x) cout<<#x<<" "<<x<<endl;
bool prime[MAX+1];
void sieve1(){
for(int i=0;i<=MAX;i++) prime[i]=1;
prime[0]=prime[1]=0;
for(lli i=4;i<=MAX;i+=2) prime[i]=0;
for (int p=3; p*p<=MAX; p+=2){
if (prime[p] == 1)
for (int i=p*2; i<=MAX; i += p){
prime[i] = 0;
}}}
bool isvowel(char v) { return (0x208222>>(v&0x1f))&1; }
lli mceil(lli a,lli b){
if(a%b==0) return(a/b);
else return(a/b +1);
}
lli mfloor(lli a,lli b){
return(a/b);
}
ll modmul(ll a, ll b) {
return ((a%mod) * (b%mod)) % mod;
}
ll modadd(ll a , ll b){
return((a%mod)+(b%mod)+mod)%mod;
}
ll modsub(ll a , ll b){
return((a%mod) - (b%mod) + mod)%mod;
}
lli fastexpo(lli a,lli b ,lli MOD = mod){
a = a%MOD;
lli ans=1;
while(b){
if(b&1)
ans=(ans*1ll*a)%MOD;
a=(a*1ll*a)%MOD;
b=b/2;
}
return ans;
}
lli cntbits(lli n){
lli cnt=0;
while(n){
cnt++;
n/=2;
}
return cnt;
}
lli fact[100001];
void facto(){
fact[0] = 1;
for(lli i=1;i<=100000;i++)
fact[i] = modmul(fact[i-1],i);
}
void chandan1(){int y=1;return;}
void chandan2(){
loop(i,10){
lli x=1;
}
return(chandan1());
}
int main(){
fastio
lli t=1;
chandan2();
while(t--) {
lli x,y;
cin>>x>>y;
for(lli i=0;i<=x;i++){
for(lli j=0;j<=x;j++){
if(2*i + 4*j == y)
{
cout<<"Yes\n";
return 0;
}
}
}
cout<<"No\n";
}
return 0;
}
