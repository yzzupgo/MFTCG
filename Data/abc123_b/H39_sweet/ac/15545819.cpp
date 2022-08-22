#include<iostream>
#include<vector>
using namespace std;
int main(){
  int mi=10000000,k=0,sums=0,sum=0,co=0;
  vector<int> a(5);
  for(int i=0;i<5;++i){
    cin>>a[i];
    sums+=a[i];
    if(a[i]%10==0){
      a[i]-=10;
      ++co;
    }
    if(mi>a[i]%10&&a[i]%10!=0){
      mi=a[i]%10;
      k=i;
    }
  }
  if(co==5){
    cout<<sums<<endl;
    return 0;
  }
  for(int i=0;i<5;++i){
    if(i!=k){
      sum+=(a[i]+(10-a[i]%10));
    }
  }
  cout<<sum+a[k]<<endl;
}