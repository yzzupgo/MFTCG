#include <bits/stdc++.h>
using namespace std;
#ifdef ENABLE_DEBUG
#define dump(a) cerr<<#a<<"="<<a<<endl
#define dumparr(a,n) cerr<<#a<<"["<<n<<"]="<<a[n]<<endl
#else
#define dump(a)
#define dumparr(a,n)
#endif
#define FOR(i,a,b) for(int i = a;i < b;i++)
#define For(i,a) FOR(i, 0, a)
#define REV(i,a,b) for(int i = b-1;i >= a;i--)
#define Rev(i,a) REV(i, 0, a)
#define REP(a) For(i, a)
typedef long long int ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef pair<ll, ll> pll;
typedef pair<ll,pll> ppll;
typedef vector<ll> vll;
const ll INF=(1LL<<50);
template<class S,class T>
std::ostream& operator<<(std::ostream& os,pair<S,T> a){
os << "(" << a.first << "," << a.second << ")";
return os;
}
template<class T>
std::ostream& operator<<(std::ostream& os,vector<T> a){
os << "[ ";
REP(a.size()){
os<< a[i] << " ";
}
os<< " ]";
return os;
}
int digit_num(ll N){
int ret=0;
while(N>0){
++ret;
N/=10;
}
return ret;
}
ll digit_2(ll N){
if(digit_num(N)==1){
return 0;
}
ll x=1;
while(digit_num(x)<digit_num(N))x*=10;
--x;
dump(N);
dump(x);
return x;
}
void solve(long long N){
ll ans=0;
if(digit_num(N)%2==1){
ans+=N-digit_2(N);
}
ll x=9;
while(digit_num(x)<digit_num(N)){
ans+=x;
x*=100;
}
cout<<ans<<endl;
}
int main(){
long long N;
scanf("%lld",&N);
solve(N);
return 0;
}
