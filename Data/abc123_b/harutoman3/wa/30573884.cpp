#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  vector<int> a(5);
  for(int i=0;i<5;i++) cin>>a[i];
  vector<int> r(5);
  for(int i=0;i<5;i++) r[i]=a[i]%10;
  int flag=0;
  do{
    flag=0;
    for(int i=1;i<5;i++){
      if(r[i]<r[i-1]){
        int tmp,tsk;
        tmp=r[i];
        r[i]=r[i-1];
        r[i-1]=tmp;
        tsk=a[i];
        a[i]=a[i-1];
        a[i-1]=tsk;
        flag=1;
      }
    }
  }while(flag==1);
  
  int ans=0;
  for(int i=1;i<5;i++) ans+=a[i]+10-r[i];
  ans+=a[0];
  
  cout<<ans<<endl;
  return 0;
}