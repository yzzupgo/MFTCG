#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv){
  int menu[5];
  for(int cnt0=0; cnt0<5; cnt0++) cin >> menu[cnt0];

  int minRem = 10;
  int sum = 0;
  for(int cnt0 = 0; cnt0 < 5; cnt0++){
    int tmpRem = menu[cnt0] % 10;
    if(tmpRem == 0) {
      sum += menu[cnt0];
    }else{
      minRem = min(minRem, tmpRem);
      sum += (menu[cnt0]/10 + 1) *10; 
    }
  }
  cout << sum - 10 + minRem << endl;
  
  return 0;
}