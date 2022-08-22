#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using db = double;

int main(){
  ll a=10;
  ll ans=0;
  ll A,B,C,D,E;
  cin>>A>>B>>C>>D>>E;
  if(A%10!=0){
    if(A%10<a)
      a=A%10;
    ans+=(A/10)*10+10;
  }
  else
    ans+=(A/10)*10;
  
  if(B%10!=0){
    if(B%10<a)
      a=B%10;
    ans+=(B/10)*10+10;
  }
  else
    ans+=(B/10)*10;
  
  if(C%10!=0){
    if(C%10<a)
      a=C%10;
    ans+=(C/10)*10+10;
  }
  else
    ans+=(C/10)*10;
  
  if(D%10!=0){
    if(D%10<a)
      a=D%10;
    ans+=(D/10)*10+10;
  }
  else
    ans+=(D/10)*10;
  
  if(E%10!=0){
    if(E%10<a)
      a=E%10;
    ans+=(E/10)*10+10;
  }
  else
    ans+=(E/10)*10;
  
    cout<<ans-(10-a)<<endl;
}