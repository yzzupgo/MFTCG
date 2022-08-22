#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<int> a(5);
  for(int i=0;i<5;i++){
    cin>>a.at(i);
  }
  int hh;
  int ans=11;
  for(int i=0;i<5;i++){
    if(ans>a.at(i)%10&&a.at(i)%10>=1){
      ans=a.at(i);
      hh=i;
    }
   
  }
  int sum=0;
  for(int i=0;i<5;i++){
    if(i==hh){
      sum+=a.at(i);
      continue;
    }
    if(a.at(i)%10!=0){
    sum+=(a.at(i)+10)/10*10;
    }
    else{
      sum+=a.at(i);
    }
  }
  cout <<sum << endl;
}
