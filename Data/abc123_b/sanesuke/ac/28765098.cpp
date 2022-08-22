#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main(){
  vector<int> V(5);
  for(int i=0;i<5;i++) cin>>V[i];
  sort(V.begin(),V.end());
  
  int ans = 1000;
  do{
    int t=0;
    for(int i=0;i<5;i++){
      t = (t+9)/10*10;
      t += V[i];
    }
    ans = min(ans,t);
  }while(next_permutation(V.begin(), V.end()));
  
  cout << ans << endl;
}