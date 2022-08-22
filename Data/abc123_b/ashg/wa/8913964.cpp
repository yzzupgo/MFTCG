#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<string> s(5);
  for(int i=0; i<5; i++){
    cin >> s.at(i);
  }
  int ans=0;
  int MIN=10;
  for(int i=0; i<5; i++){
    if(s.at(i).at(s.at(i).size()-1)-'0'==0){ans += stoi(s.at(i));}
    else{
      ans += stoi(s.at(i))/10 + 10;
      MIN = min(s.at(i).at(s.at(i).size()-1)-'0',MIN);
    }
  }
  ans -= 10;
  ans += MIN;
  cout << ans << endl;
}
    
