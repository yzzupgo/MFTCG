#include <bits/stdc++.h>
#define ft first
#define sc second
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define pt(sth) cout << sth << "\n"
#define chmax(a, b) {if(a<b) a=b;}
#define chmin(a, b) {if(a>b) a=b;}
#define moC(a, s, b) (a)=((a)s(b)+MOD)%MOD
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
typedef map<ll, ll> Map;
static const ll INF=1e18;
static const ll MAX=1e5+7;
static const ll MOD=1e9+7;
ll max(ll a, ll b) {return a>b ? a:b;}
ll min(ll a, ll b) {return a<b ? a:b;}

int main(void) {
    ll a[5];
    ll i;
    ll min=9;
    
    ll ans=0;
    for(i=0; i<5; i++) {
        cin >> a[i];
        
        if(a[i]%10==0) {
            ans+=a[i];
            continue;
        }
        
        ans+=a[i]+10-a[i]%10;
        chmin(min, a[i]%10);
    }
    
    pt(ans-10+min);
    
    
}





