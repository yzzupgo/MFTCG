#include <bits/stdc++.h>
using namespace std;

int last(int &a, int &b, int &c, int &d, int &e){
  for (int i=1; i<=9; i++){
    if (a%10==i){
      return a%10;
    }
    if (b%10==i){
      return b%10;
    }
    if (c%10==i){
      return c%10;
    }
    if (d%10==i){
      return d%10;
    }
    if (e%10==i){
      return e%10;
    }
  }
  return 10;
}

int up(int x){
  for (int i=0; i<=130; i++){
    if (i*10>=x){
      return(i*10);
    }
  }
}

int main(){
  int a,b,c,d,e;
  cin>>a>>b>>c>>d>>e;
  int total=up(a)+up(b)+up(c)+up(d)+up(e)-(10-last(a,b,c,d,e));
  cout<<total<<endl;
}