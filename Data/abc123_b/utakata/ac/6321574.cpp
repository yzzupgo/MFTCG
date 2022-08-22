#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c,d,e;cin>>a>>b>>c>>d>>e;
  vector<int> r(5);
  r.at(0)=a%10;
  r.at(1)=b%10;
  r.at(2)=c%10;
  r.at(3)=d%10;
  r.at(4)=e%10;
  for(int i=0;i<5;i++){
    if(r.at(i)==0)r.at(i)=10;
  }
  sort(r.begin(),r.end());
  cout<<a+b+c+d+e-r.at(1)-r.at(2)-r.at(3)-r.at(4)+40<<endl;
}
  
