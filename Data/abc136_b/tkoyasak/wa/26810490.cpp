#include <bits/stdc++.h>
using namespace std;
#pragma GCC target("avx")
#pragma GCC optimize("O3")
#define all(obj) (obj).begin(),(obj).end()
#define YesNo(bool) if(bool){cout<<"Yes"<<endl;}else{cout<<"No"<<endl;}
#define reps(i,a,n) for(long long i=(a);i<(long long)(n);++i)
#define rep(i,n) reps(i,0,n)
template<class T> inline bool chmin(T& a, T b) {if(a>b){a=b;return(true);}return(false);}
template<class T> inline bool chmax(T& a, T b) {if(a<b){a=b;return(true);}return(false);}
using ll=long long;
using ull=unsigned long long;
using ld=long double;
using vll=vector<ll>;
const int inf = 1e9 + 10;
const ll INF = 1e18;
const ld EPS = 1e-10;
int main(void)
{
ll n;
cin>>n;
ll ans=0;
if (n>10) ans+=9;
else {cout<<n<<endl;return 0;}
if(n>1000) ans+=900;
else {cout<<ans+(n<100?0:n-99)<<endl;return 0;}
cout<<ans+(n<10000?0:n-9999)<<endl;
}
