#include<bits/stdc++.h>
using namespace std;

int main(){
  int t,s;
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
  s=b.at(0)+a.at(0)+a.at(1)+a.at(2)+a.at(3)+a.at(4);
  cout<<s<<endl;
}