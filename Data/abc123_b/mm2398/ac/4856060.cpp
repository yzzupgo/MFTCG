#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> s(5);
  for(int i=0;i<5;i++){
    cin >> s[i];
  }
  int min=10;
  int ans=0;
  for(int i=0;i<5;i++){
    
    if(s[i]%10!=0){
      if(min>s[i]%10){
      min = s[i]%10;
    }
      s[i] = (s[i]/10+1)*10;
    }
    ans+=s[i];
  }
  cout << ans + min -10 << endl;
}