#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
  ll A,B,C,D,E;
  cin >> A >> B >> C >> D >> E;
  vector<ll> mod(5);
  bool zero = false;
  vector<ll> amari(1,100000007);
  ll time = 0;
  mod.at(0) = A%10;
  mod.at(1) = B%10;
  mod.at(2) = C%10;
  mod.at(3) = D%10;
  mod.at(4) = E%10;
  time = A/10 + B/10 + C/10 + D/10 + E/10;
  time *= 10;
  rep(i,5){
    if(mod.at(i) == 0){
      continue;
    }
    else{
      amari.push_back(mod.at(i));
      time += 10;
      zero = true;
    }
  }
  sort(amari.begin(),amari.end());
  if(zero){
    time = time - 10+amari.at(0);} 
    cout << time << endl;
}
  
  
    