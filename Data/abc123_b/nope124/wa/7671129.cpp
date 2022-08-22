#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); i++)

int int_len(int n) {
  int s=0;
  while(n!=0) s++, n/=10;
  return s;
}

int int_sum(int n) {
  int m=0,s=0,a=n;
  while(a!=0) s++, a/=10;
  for(int i=s-1;i>=0;i--) m+=n/((int)pow(10,i))-(n/((int)pow(10,i+1)))*10;
  return m;
}


int vec_sum(vector<int> v){
  int n=0;
  for(int i=0;i<v.size();i++) n+=v[i];
  return n;
}

int main() {
  int a=10;
  vector<int> n(5);
  rep(i,5) cin>>n[i];
  rep(i,5){
    if(n[i]%10!=0){
      a=min(n[i]%10,a);
      n[i]+=10-n[i]%10;
    }
  }
  if(a==10){
    a=0;
  }
  cout<<n[0]+n[1]+n[2]+n[3]+n[4]+a<<endl;
  
  
}
