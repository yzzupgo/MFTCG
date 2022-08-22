#include <bits/stdc++.h>
using namespace std;

int main() {
  
  vector<int> S(5);

  for(int i = 0;i < 5;++i){
    cin >> S[i];
  }
  
  int num;
  int num2 = 13;
  int num3 = 0;
  int num4;
  int num5;
  
  for(int i = 0;i < 5;++i){
    num = S[i] % 10;
    num4 = S[i] / 10;
    
    if(num > 0){
      num2 = min(num,num2);
      num5 = num4 * 10 + num2;
    }
  }
  
  for(int i = 0;i < 5;++i){
    if(S[i] == num5){
      num3 = num3 + num5;
    }
    else if(S[i] % 10 == 0){
      num3 = S[i] + num3;
    }
    else{
      num3 = ((S[i] / 10 + 1) * 10) + num3;
    }
  }
  
  cout << num3 << endl;
}
  
