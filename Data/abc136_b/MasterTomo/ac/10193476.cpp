#include<bits/stdc++.h>
#include <math.h>
using namespace std;
#define rep(i,n) for(ll i=0;i<n;i++)
#define repl(i,l,r) for(ll i=(l);i<(r);i++)
#define per(i,n) for(ll i=n-1;i>=0;i--)
#define lper(i,r,l) for(ll i=r-1;i>=l;i--)
#define fi first
#define se second
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define CST(x) cout<<fixed<<setprecision(x)
using ll=long long;
using vl=vector<ll>;
using vvl=vector<vector<ll>>;
using pl=pair<ll,ll>;
const ll MOD=1000000007;
const ll MOD9=998244353;
const int inf=1e9;
const ll INF=4e18;
const ll dy[4]={1,0,-1,0};
const ll dx[4]={0,-1,0,1};
int main() {
int N;
cin >>N;
if(N<10) {
cout <<N<< endl;
}
else if((N<100) &&(N>=10)) {
cout <<9<< endl;
}
else if ((N<1000) &&(N>=100)) {
cout <<9+(N-100)+1<< endl;
}
else if ((N<10000) &&(N>=1000)){
cout << 9+900<< endl;
}
else if ((N<100000) &&(N>=10000)) {
cout <<909+(N-10000)+1<< endl;
}
else if(N==100000) {
cout <<90909<< endl;
}
}
