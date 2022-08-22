#include <bits/stdc++.h>
using namespace std;

int main(void){
  vector<int> vec(5);
  int mod_min;
  int sum = 0;
  for(int i = 0; i < 5; i++){
    cin >> vec[i];
    sum += int(vec[i] / 10) * 10;
    if(vec[i] % 10 != 0){
      sum += 10;
      mod_min = vec[i] % 10;
      
    }
  }
  for(int i = 0; i < 5; i++){
     if(vec[i] % 10 != 0 && vec[i] % 10 < mod_min){
      mod_min = vec[i] % 10;      
    }
  }
  cout << sum - 10 + mod_min;
  
 return 0;
}