#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int A, B, C, D, E,a, b, c, d, e;
  int time, mint;
  cin >> A >> B >> C >> D >> E;
  time=0;
  a=A%10;
  b=B%10;
  c=C%10;
  d=D%10;
  e=E%10;

  mint=200;
  if(a!=0&&mint>a) mint=a;
  if(b!=0&&mint>b) mint=b;
  if(c!=0&&mint>c) mint=c;
  if(d!=0&&mint>d) mint=d;
  if(e!=0&&mint>e) mint=e;
  
  if(mint==200) mint=0;
  
  if(a!=0) time+=(A/10+1)*10;
 else time+=A;
  if(b!=0) time=time+(B/10+1)*10;
  else time+=B;
  if(c!=0) time=time+(C/10+1)*10;
   else time+=C;
  if(d!=0) time=time+(D/10+1)*10;
  else time+=D;
  if(e!=0) time=time+(E/10+1)*10;
   else time+=E;
  time=time+mint-10;
  if(mint==0); time+=10;
  cout<<time<<endl;
  
}