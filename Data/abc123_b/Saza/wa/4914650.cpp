#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int>time(5);
  for(int i=0;i<5;i++)
    cin>>time.at(i);
  vector<int>mod(5);
  for(int i=0;i<5;i++)
    mod.at(i)=10-time.at(i)%10;
  sort(mod.begin(),mod.end());
  int res=0;
  for(int i=0;i<5;i++)
    res+=time.at(i);
  for(int i=0;i<4;i++)
    res+=mod.at(i);
  cout<<res;
}