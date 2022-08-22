#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main(){
  vector<int> V(5);
  int x=10;
  for(int i=0;i<5;i++){
    cin>>V[i];
    x = min(10,V[i]%10);
  }
  int ans = 0;
  for(int i=0;i<5;i++){
    ans += (V[i]+9)/10*10;
  }
  ans = ans-10+x;
  
  cout << ans << endl;
}