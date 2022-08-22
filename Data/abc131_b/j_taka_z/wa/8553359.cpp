#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i=0;i<(n);i++)
#define sz(x) ll(x.size())
using namespace std;
int main() {
ll ans=0,n,l,absmin=10000;
cin >> n >> l;
vector<ll>p(n);
rep(i,n) p.at(i)=l-1+i;
ans=accumulate(p.begin(),p.end(),0);
rep(i,n) if(abs(absmin)>abs(p.at(i))) absmin=p.at(i);
ans-=absmin;
cout << ans << endl;
}
