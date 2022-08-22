#include <bits/stdc++.h>
using namespace std;
int main (){
  int x[5],t=0;
  int i,m=9,y,a,c=4;
  for(i=0;i<5;i++){
    cin>>x[i];
    y=x[i];
      a=y/10;
      if(a==0){
        if(y<m){
          c=i;
          m=y;
        }
      }
    else{
      y=y-(y/10)*10;
     if(y<m){
          c=i;
          m=y;
        }
    }
  }
  y=x[4];
  x[4]=x[c];
  x[c]=y;
  for(i=0;i<5;i++){
    cin>>x[i];
    t+=x[i];
    while(t%10!=0&&i!=4)
      t++;
  }
  cout<<t;
  return 0;
}