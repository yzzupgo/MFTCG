#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i=0;i<(n);i++)
#define sz(x) ll(x.size())
using namespace std;

int main() {
  int ans=0,a,tmp=1000;
  rep(i,5){
  	cin >> a;
  	ans+=a/10*10;
  	ans+= (a%10==0) ? 0:10;
  	if(a%10!=0) tmp=min(tmp,a%10);	
  }
  if(tmp!=0) ans=ans+tmp-10;
  cout << ans <<endl;
}
