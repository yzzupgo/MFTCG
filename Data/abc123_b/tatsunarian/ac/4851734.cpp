#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c,d,e;
  cin>>a>>b>>c>>d>>e;
  int time;
  int A,B,C,D,E;
  A=10-a%10;
  B=10-b%10;
  C=10-c%10;
  D=10-d%10;
  E=10-e%10;
  if(A==10){
    A=0;
  }
  else{
  }
  if(B==10){
    B=0;
  }
  else{
  }
  if(C==10){
    C=0;
  }
  else{
  }
  if(D==10){
    D=0;
  }
  else{
  }
  if(E==10){
    E=0;
  }
  else{
  }
  int F,G,H,I;
  F=max(A,B);
  G=max(F,C);
  H=max(G,D);
  I=max(H,E);
  time=a+b+c+d+e;
  if(I==A){
    cout<<B+C+D+E+time<<endl;
  }
  else if(I==B){
    cout<<A+C+D+E+time<<endl;
  }
  else if(I==C){
    cout<<A+B+D+E+time<<endl;
  }
  else if(I==D){
    cout<<A+B+E+C+time<<endl;
  }
  else{
    cout<<A+B+D+C+time<<endl;
  }
}