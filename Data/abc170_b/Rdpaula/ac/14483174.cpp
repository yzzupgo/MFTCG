#include<bits/stdc++.h>
#define pi acos(-1)
#define ll long long
#define pii pair<ll,ll>
#define debug(a) cout<<a<<'\n'
#define maxn 100009
#define MOD 1000000007
#define F first
#define S second
#define rep(i,a,b) for(ll i = a; i < (b); ++i)
#define per(i,b,a) for(ll i = b-1; i>=a ; i--)
#define trav(a,x) for(auto& a : x)
#define allin(a,x) for(auto a : x)
#define all(x) begin(x), end(x)
#define sz(x) (ll)(x).size()
using namespace std;
const ll INF = 1e17 + 9;
int main(){
ios::sync_with_stdio(false);
cin.tie(0);
ll x,y;
cin>>x>>y;
if(y%2){
cout<<"No\n";
return 0;
}
ll yact=y/2;
int cont=0;
while(yact+cont>x && yact>1){
yact-=2;
cont++;
}
if(yact+cont==x)cout<<"Yes\n";
else cout<<"No\n";
return 0;
}
