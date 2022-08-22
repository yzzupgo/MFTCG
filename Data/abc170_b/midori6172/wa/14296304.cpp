#include<bits/stdc++.h>
#define ll long long
#define rp(i,a,b) for(ll i=a;i<b;i++)
#define r(i,n) for(ll i=0;i<n;i++)
#define rt return
#define db double
#define ldb long double
#define vd void
#define p(x) cout<<(x)<<endl;
#define ce continue;
#define bl bool
#define r0 rt 0;
#define r1 rt 1;
#define elif else if
#define bk break;
#define A p("A")
#define B p("B")
#define C p("C")
#define D p("D")
#define E p("E")
#define F p("F")
#define S(a) sort(a.begin(),a.end());
#define R(a) reverse(a.begin(),a.end());
#define cl cout<<endl;
#define pb(x) push_back(x);
#define str string
using namespace std;
void Cond(int g){if(g)p("YES")else p("NO")rt;}
void cond(int g){if(g)p("Yes")else p("No")rt;}
ll gcd(ll a,ll b){if(a<b)swap(a,b);if(a%b==0)rt b;gcd(b,a%b);}
str su="0123456789";
str m1="abcdefghijklmnopqrstuvwxyz";
str m2="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
map<char,ll>m5;
typedef pair<ll,ll> P;
const ll INF=(ll)1e18+10;
ll t1=0,t2=0,t3=0,t4=0,t5=0,t6=0,t7=0,t8=0,g=0,ans=0;
ll n=0,m=0,k=0,mx=-INF,mn=INF,ct=0;
ll tmp=0,tmp1=0,tmp2=0,tmp3=0,tmp4=0;
ll sum=0,mask=0;
set<P> pst;
set<ll>st,st1,st2;
set<char> cst;
ll powmod(ll a,ll b,ll x){
if(!b)r1
if(!(b%2)){
ll t=powmod(a,b/2,x);
rt t*t%x;
}
rt ((a)*powmod(a,b-1,x))%x;
}
void di(){m5['a']=0;
m5['b']=1;
m5['c']=2;
m5['d']=3;
m5['e']=4;
m5['f']=5;
m5['g']=6;
m5['h']=7;
m5['i']=8;
m5['j']=9;
m5['k']=10;
m5['l']=11;
m5['m']=12;
m5['n']=13;
m5['o']=14;
m5['p']=15;
m5['q']=16;
m5['r']=17;
m5['s']=18;
m5['t']=19;
m5['u']=20;
m5['v']=21;
m5['w']=22;
m5['x']=23;
m5['y']=24;
m5['z']=25;
}
map<ll,ll>mp,mp1,mp2,mp3;
typedef std::vector<ll> vl;
typedef pair<ll,ll> P;
typedef pair<ll,P> P2;
typedef struct edge2{P tos;ll cost;}EDGE2;
typedef struct edge1{ll to,cost;}EDGE;
bl used[(ll)1e9];
const ll M=(ll)1e9+7;
ll fac[1000007],finv[1000007],inv[1000007];
void initcmb(){
fac[0]=fac[1]=1;
finv[0]=finv[1]=1;
inv[1]=1;
for(int i=2;i<1000007;i++){
fac[i]=fac[i-1]*i%M;
inv[i]=M-inv[M%i]*(M/i)%M;
finv[i]=finv[i-1]*inv[i]%M;
}
}
ll cmb(ll n,ll k){
if(n<k)return 0;
if(n<0 || k<0)return 0;
return fac[n]*(finv[k]*finv[n-k]%M)%M;
}
db pi=3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895493038196;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const ll MAX=5+(ll)1e5*3;
vl rui(MAX);
vector<vector<EDGE>>G(1e6);
int main(){
clock_t start = clock();
di();
ll x,y;
cin>>x>>y;
r(i,10){
r(j,10){
if(x!=(i+j))ce
t1=i*2;
t1+=(j*4);
if((t1)==y){
cond(1);r0
}
}
}
cond(0);
clock_t end = clock();
const double time = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000.0;
return 0;
}
