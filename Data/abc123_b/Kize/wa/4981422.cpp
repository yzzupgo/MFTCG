#include <iostream>

using namespace std;

int main(){
  int a[5]={},sum=0,min=9;
  for(int i=0;i<5;i++){
    cin >> a[i];
  }
  for(int i=0;i<5;i++){
    if(a[i]%10==0){
      sum+=a[i];
    }
    else{
      sum+=(a[i]/10+1)*10;
      if(a[i]%10<min){
        min=a[i]%10;
      }
    }
  }
  sum-=10-min;
  cout << sum << "\n";
}
