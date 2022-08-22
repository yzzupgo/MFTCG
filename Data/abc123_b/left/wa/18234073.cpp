#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#define _GLIBCXX_DEBUG
#endif
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = s; i < (int)(n); i++)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define vec vector
#define rip return 0
typedef long long ll;
typedef pair<ll,ll> P;
ll max(ll x,ll y){
if(x>y)return x;
else return y;
}
ll min(ll x,ll y){
if(x<y)return x;
else return y;
}


int main(){
    int a,b,c,d,e,mod=0,ans=0;
    cin>>a>>b>>c>>d>>e;
    vector<int> X={a,b,c,d,e};
    rep(i,5){
        if((X[i]-1)%10<(X[mod]-1)%10)mod=i;
        ans+=(X[i]+9)/10*10;
        }
    cout<<ans-(X[mod]+9)%10*10+X[mod]<<endl;
}