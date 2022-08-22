#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> x(5);
  int mostminno=-1,mmin=10;
  for(int i=0;i<5;i++){
    cin>>x[i];
    if ((x[i]%10)!=0){
      if ((x[i]%10)<mmin){
        mmin=x[i]%10;
        mostminno=i;
      }
    }
  }
  
  
  int ans=0;
  for(int i=0;i<5;i++){
    if (i!=mostminno){
      ans+=(x[i]+9)/10*10;
    }
  }
  
  if (mostminno!=-1){
    ans+=x[mostminno];
  }
  cout<<ans<<endl;
  
  return 0;
}