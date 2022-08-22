#include<bits/stdc++.h>
#define ll long long int

using namespace std;

const ll mod=1000000007;
const ll inf=1e18;

int main(){

  ll x[5];
  cin >> x[0] >> x[1] >> x[2] >>x[3] >> x[4];

  ll s=0;
  for(int i=0;i<5;i++){
    if(x[i]%10==0);
    else s=max(x[i]/10*10+10-x[i],s);
  }
  ll l=0;
  for(int i=0;i<5;i++){
    if(x[i]%10==0)l+=x[i];
    else l+=x[i]/10*10+10;
  }

  cout << l-s << endl;

  

}