#include <bits/stdc++.h>
#define f first
#define s second
#define fore(i,a,b) for(int i = (a), ThxMK = (b); i < ThxMK; ++i)
#define pb push_back
#define all(s) begin(s), end(s)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz(s) int(s.size())
#define ENDL '\n'
using namespace std;
typedef long double ld;
typedef long long lli;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<lli> vl;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<bool> vb;
#define deb(x) cout << #x": " << (x) << endl;
const int N = 1e3+5;
const lli INF = 1e18;
const lli MOD = 1e9+7;
bool mm[N];
vi primes(1,2);
ld nk[N][N];
void sieve(){
for(int i = 4; i<N; i+=2)mm[i]=1;
for(int i = 3; i*i<=N; i+=2)if(!mm[i])for(int j = i*i; j<N; j+=i)mm[j]=1;
for(int i = 3; i<N; i+=2)if(!mm[i])primes.pb(i);
}
void pascal(){
fore(i,0,N)nk[i][0]=nk[i][i]=1.0;
fore(i,1,N)fore(j,1,i)nk[i][j]=nk[i-1][j-1]+nk[i-1][j];
}
lli gcd(lli a, lli b){return (b?gcd(b,a%b):a);}
lli lcm(lli a, lli b){
if(a<b)swap(a,b);
lli c = gcd(a,b);
a/=c;
return a*b;
}
int popcount(lli x) { return __builtin_popcountll(x); }
lli poww(lli a, lli b){
lli res =1;
while(b){
if(b&1) res = res * a;
a = a*a;
b/=2;
}
return res;
}
lli powm(lli a, lli b){
lli res =1;
while(b){
if(b&1) res = (res * a)%MOD;
a = (a*a)%MOD;
b/=2;
}
return res;
}
bool isPrime(lli x){
if(x==1)return 0;
for(auto i:primes){
if(i*i>x)return 1;
if(x%i==0)return 0;
}
return 1;
}
int main(){_
int n,m; cin>>n>>m;
fore(i,0,n){
lli sum = 4*i;
fore(j,0,n-i+1)if(sum+2*j==m){
cout<<"Yes"<<ENDL;
return 0;
}
}
cout<<"No"<<ENDL;
}
