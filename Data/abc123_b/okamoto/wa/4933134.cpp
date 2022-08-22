#include<iostream>
using namespace std;
int main(){
  int a[5] = {},loss[5]={};
  int i;
  int largeloss = 0,number;
  int sum=0;
  for(i=0;i<5;i++){
    cin >> a[i];
    if(a[i]%10 != 0){
      loss[i] = 10 - a[i]%10;
    }else{
      loss[i] = 0;
    }
    if(largeloss < loss[i]){
      largeloss= loss[i];
      number = i;
    }
  }
  for (i=0;i<5;i++){
    if(i==number){
      sum=sum+a[i];
    }else{
      sum=sum+a[i]+loss[i];
    }
    cout << sum << endl;
  }
  cout << sum << endl;
  return 0;
}
