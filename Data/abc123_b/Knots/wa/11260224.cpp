#include <bits/stdc++.h>
using namespace std;

int main(){
  int num[5];
  int min1 = 9;
  int ans = 0;
  for(int i=0;i<5;i++){
      cin >> num[i];
      if(num[i]%10==0) ans += num[i];
      else{
        ans += ((num[i]/10)+1)*10;
      }
      if(num[i]%10!=0 && min1>(num[i]%10)) min1 = num[i]%10;
  }
  cout << ans + min1 -10 << endl;
}
