#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
  int s=0,a[5];
  for(int i=0;i<5;++i){
    cin>>a[i];
    if(i){
      if(a[i]%10==0||a[i]%10>a[i-1]%10)swap(a[i],a[i-1]);
    }
  }
  for(int i=0;i<5;++i){
    if(i==4){s+=a[i];break;}
    if(a[i]%10)a[i]+=10;
    a[i]/=10;
    s+=a[i]*10;
  }
  cout<<s<<endl;
  return 0;
}