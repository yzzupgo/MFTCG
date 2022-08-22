#include<bits/stdc++.h>
using namespace std;

int main(){
  int t,s=0;
  int T=10;
  vector<int> a(5);
  vector<int> b(5);
  for(int i =0;i<5;i++){
    cin>>a.at(i);
  }
   for(int i =0;i<5;i++){
     b.at(i)=a.at(i)%10;}
   for(int i =0;i<5;i++){
     if(b.at(i)==0){}
     else{a.at(i)=a.at(i)-b.at(i)+10;}
   }
  sort(b.begin(),b.end());
  for(int i=0;t<1&&i<5;i++){
    t=b.at(i);}
  if(t==0){T=0;}
  s=t+a.at(0)+a.at(1)+a.at(2)+a.at(3)+a.at(4)-T;
  cout<<s<<endl;
}