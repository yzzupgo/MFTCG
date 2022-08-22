#include <bits/stdc++.h>
using namespace std;
int main(){
  int a[5];
  for(int i=0;i<5;i++)cin>>a[i];
  int x=9;
  for(int i=0;i<5;i++){
    if(a[i]%10<x&&a[i]%10>0){
      x = a[i]%10;
    }
  }
  int sum=0;
  for (int i=0;i<5;i++){
    if(a[i]%10!=0){
      sum = sum + (a[i]/10+1)*10;
    }
    else
      sum=sum+a[i];
  }
  cout<<sum-(10-x)<<endl;
}
