#include <bits/stdc++.h>
using namespace std;  
typedef long long ll;
typedef vector<ll> vint;
int main() {

  vint v(5),b(5);
  for (ll i=0;i<5;i++) {
    cin >> v.at(i);
    b.at(i) = v.at(i)%10;
  }
  
  ll x=10;
  sort(b.begin(),b.end());
  for (ll i=0;i<5;i++) {
    if (b.at(i)!=0) {
      x = b.at(i);
      break;
    }
  }
  
  for (ll i=0;i<5;i++) {  
    if (v.at(i)%10!=0) {
      ll a=v.at(i)/10;
      v.at(i) = 10*(a+1);
    }
  }
  
  
  ll ans=0;
  for (ll i=0;i<5;i++) { 
    ans += v.at(i);
  }
  
  cout << ans-10+x;
}
  