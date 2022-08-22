#include <bits/stdc++.h>
using namespace std;
 
int main() {
  
  vector<int> data(5);
  
  int num=1000,index=0;
 
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
    if(data.at(i) % 10 != 0 && data.at(i) % 10 < num){  // 0=> 0 ,9 => 9
      num = data.at(i) % 10;
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