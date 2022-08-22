#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c,d,e;
  cin>>a>>b>>c>>d>>e;
  cout<<10*((a+9)/10+(b+9)/10+(c+9)/10+(d+9)/10+(e+9)/10)-min((a+9)%10,min((b+9)%10,min((c+9)%10,min((d+9)%10,(e+9)%10))));
}