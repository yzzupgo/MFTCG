#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c,d,e;
  cin>>a>>b>>c>>d>>e;
  vector<int>time={a,b,c,d,e};
  int n=5;
  vector<int>nexttime(n);
  for(int i=0;i<n;i++){
    if(time.at(i)%10==0){
      nexttime.at(i)=time.at(i);
    }
    else{
      nexttime.at(i)=time.at(i)-time.at(i)%10+10;
    }
  }
 
    
  int besttime=99999999;
  for(int i=0;i<n;i++){
    int sumtime=0;
    for(int j=0;j<n;j++){
      if(i==j){
        sumtime+=time.at(j);
      }
      else{
        sumtime+=nexttime.at(j);
      }
    }
    besttime=min(besttime,sumtime);
  }
  cout<<besttime<<endl;
}
