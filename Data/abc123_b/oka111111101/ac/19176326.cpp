#include <bits/stdc++.h>
using namespace std;
int main(){
 vector<pair<int,int>> P(5);
  for(int i=0;i<5;i++){
   cin>>P.at(i).second;
    if(P.at(i).second%10==0){P.at(i).first=0;}
    else {P.at(i).first=10-P.at(i).second%10;}
  }
  sort(P.begin(),P.end());
  int sum=0;
  for(int i=0;i<4;i++){
   sum+=P.at(i).first+P.at(i).second;
  }
  sum+=P.at(4).second;
  cout<<sum;
  
  
}