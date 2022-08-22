#include<iostream>
using namespace std;

int main(){
  int k=1009,s=0;
  for(int j=0;j<5;j++){
    int a; cin>>a;
    if(a%10==0) s += a;
    else if(a%10<=k%10){
      k=a;
      s += a/10*10 +10;
    }
    else s += a/10*10 +10;
  }
  
  if(k==1009){cout<<s<<endl; return 0;}
  else s = s -(k/10*10 + 10) +k;
  cout<<s<<endl;
  return 0;
}