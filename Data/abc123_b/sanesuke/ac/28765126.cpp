#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main(){
  vector<int> V(5);
  int x=0;
  for(int i=0;i<5;i++){
    cin>>V[i];
    x = max(x,(130-V[i])%10);
  }
  int ans = 0;
  for(int i=0;i<5;i++){
    ans += (V[i]+9)/10*10;
  }
  ans -= x;
  
  cout << ans << endl;
}