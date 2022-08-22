#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define pb push_back
#define F first
#define S second
#define all(v) v.begin(),v.end()
#define prnt(a) cout<<a
#define sp cout<<" "
#define nl cout<<"\n"
#define in1(a) cin>>a
#define in2(a,b) cin>>a>>b
#define in3(a,b,c) cin>>a>>b>>c;
#define inf 2147483647
string toString(ll n){stringstream ss; ss<<n; return ss.str();}
void yesNo(bool ck){cout<<(ck? "YES\n":"NO\n");}
vector<ll> removeDup(vector<ll>v){
sort(all(v)); v.resize(distance(v.begin(),unique(all(v))));return v;}
const int N=2e6+50;
int main(){
ll t=1;
for(ll T=1; T<=t; T++){
ll x,y; cin>>x>>y;
while((x*2)<y and x>0){
x--; y-=4;
}
if(y==0 or (x*2)==y){
cout<<"Yes\n";
}
else{
cout<<"No\n";
}
}
return 0;
}
