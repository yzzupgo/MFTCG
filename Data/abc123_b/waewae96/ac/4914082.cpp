#include<iostream>
#include<cmath>
using namespace std;

int main(void){
  int a[5];
  int sum = 0, mini = 10, mini_id = 5;
  for(int i = 0; i < 5; i++){
    cin >> a[i];
    sum += a[i];
    if(a[i]%10 < mini && a[i]%10 != 0){
      mini = a[i]%10;
      mini_id = i;
    }
  }
  if(mini_id == 5){
    cout << sum << endl;
  }
  else{
    sum = 0;
    for(int i = 0; i < 5; i++){
      if(i != mini_id){
        if(a[i]%10 == 0){
          sum += a[i];
        }
        else{
          mini = a[i]/10+1;
          sum += mini*10;
        }
      }
      else{
        sum += a[i];
      }
    }
    cout << sum << endl;
  }
  return 0;
}