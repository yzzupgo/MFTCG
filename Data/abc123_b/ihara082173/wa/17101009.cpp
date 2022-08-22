#include <bits/stdc++.h>
using namespace std;
 
int main() {
  
  vector<int> data(5);
  
  int max=1000,index=0;
 
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
    if(10 - data.at(i) % 10 < max){
      max = data.at(i) % 10;
      index = i;
    }
  }

  int ans = 0;
 
  for (int i = 0; i < 5; i++) {
    
    if(i == index || data.at(i) % 10 == 0){
      ans += data.at(i);
    }else{
      ans += data.at(i) + 10-(data.at(i)%10);
    }
	
  }
 
   cout << ans << endl;
 
}