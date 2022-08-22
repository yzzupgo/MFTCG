#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main(){
  int s[5];
  for(int i=0;i<5;i++){
    cin >> s[i];
  }
  
  int mini = 10;
  for(int i=0;i<5;i++){    
   if(s[i]%10 != 0){
     mini = min(s[i] % 10,mini);
   }
  }
  int sum = 0;
  for(int i=0;i<5;i++){
    if(s[i]%10 == 0){
      sum += s[i];
    }else{
      sum += s[i] + (10 - s[i]%10);
    }
  }
  int ans = sum - mini;
  cout << ans << endl;
}