#include <bits/stdc++.h>
using namespace std;

int main() {
  
  vector<int> S(5);
  int num;
  int num2 = 0;
  
  for(int i = 0;i < 5;++i){
    cin >> S[i];
  }
  
  num = S[0];
  
  for(int i = 1;i < 5;++i){
    if(num % 10 > 0){
      num = min(S[i + 1] % 10,num % 10);
    }
  }
  
  for(int i = 0;i < 5;++i){
    if(S[i] % 10 == 0){
      num2 = num2 + S[i];
    }
     
    else{
      num2 = num2 + ((num2 / 10 + 1) * 10);
    }
    
    if(S[i] == num){
      num2 = num2 - num;
    }
  }
  
  num2 = num2 + ((num / 10 + 1) * 10);
       
  cout << num2 << endl;
}
