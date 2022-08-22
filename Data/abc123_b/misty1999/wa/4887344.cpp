#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> vl;
#define rep(i,n) for(ll i = 0; i < ll(n); i++)
#define reep(i,n) for(ll i = n; i >-1; i--)
#define deb(variable) cout<<#variable<<"="<<variable<<endl;
#define pb push_back
const ll INF=99999999999999999;
const ll MAX_N=100010;
ll a,b,c,d,e,x,y,m,n,l,q,ans=0;
vl v,v1,v2;
int main(){
    cin>>a>>b>>c>>d>>e;
    v.push_back((a-1)%10);
    v.push_back((b-1)%10);
    v.push_back((c-1)%10);
    v.push_back((d-1)%10);
    v.push_back((e-1)%10);
    sort(v.begin(),v.end());
    cout<<(a-1)/10+(b-1)/10+(c-1)/10+(d-1)/10+(e-1)/10+50+v[0]+1<<endl;
}