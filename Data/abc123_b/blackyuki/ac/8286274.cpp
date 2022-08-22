#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)  for(long long i=0;i<(long long)(n);i++)
#define REP(i,k,n) for(long long i=k;i<(long long)(n);i++)
#define all(a) a.begin(),a.end()
#define eb emplace_back
#define pb push_back
#define lb(v,k) (lower_bound(all(v),k)-v.begin())
#define chmin(x,y) if(x>y)x=y
#define chmax(x,y) if(x<y)x=y
typedef long long ll;
typedef pair<ll,ll> P;
typedef tuple<ll,ll,ll> PP;
typedef priority_queue<ll> PQ;
typedef priority_queue<ll,vector<ll>,greater<ll>> SPQ;
using vi=vector<ll>;
using vvi=vector<vector<ll>>;
using vc=vector<char>;
using vvc=vector<vector<char>>;
const ll inf=100100100100;
const int Inf=1001001001;
const int mod=1000000007;
int main(){
    vi v(5);
    rep(i,5)cin>>v[i];
    int a=0;
    int sum=0;
    rep(i,5){
        sum+=v[i];
        sum+=(10000-v[i])%10;
        chmax(a,(10000-v[i])%10);
    }
    cout<<sum-a<<endl;
}