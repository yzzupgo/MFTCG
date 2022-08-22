#include <bits/stdc++.h>
using namespace std;
int main (){
  int x[5],t=0;
  int i;
  for(i=0;i<5;i++){
    t+=x[i];
    while(t%10!=0&&i==4)
      t++;
  }
  cout<<t;
  return 0;
}