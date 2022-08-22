#include <iostream>
using namespace std;
 
int rise(int *num){
  if(*num % 10){
    return (*num / 10 + 1) * 10;
  }else{
    return *num;
  }
}

int main(){
  int a[5],b[5],times = 0;
  for(int i = 0;i < 5;i++)cin >> a[i];
  for(int i = 0;i < 5;i++){
    times += rise(&a[i]);
    b[i] = (a[i] % 10) ? (a[i] % 10) : 10;
  }
  for(int i = 0;i < 5;i++){
    for(int j = i + 1;j < 5;j++){
      if(b[i] < b[j]){
        b[i] ^= b[j];
        b[j] ^= b[i];
        b[i] ^= b[j];
      }
    }
  }
  cout << times + b[4] - 10 << endl;
  return 0;
}