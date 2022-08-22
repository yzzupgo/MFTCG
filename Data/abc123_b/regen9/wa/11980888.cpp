#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<pair<int,int>> vec(5);
  int i;
  for(i=0;i<5;i++){
    int a;
    cin >> a;
    vec.at(i)=make_pair(a%10,a);
    if(vec.at(i).first==0){
      vec.at(i).first=10;
    }
  }
  sort(vec.begin(),vec.end());
  reverse(vec.begin(),vec.end());
  int sum=0;
  for(i=0;i<4;i++){
    if(vec.at(i).first==0){
      sum+=vec.at(i).second;
    }else{
      sum+=vec.at(i).second-vec.at(i).second%10+10;
    }
  }
  sum+=vec.at(4).second;
  cout << sum;
}