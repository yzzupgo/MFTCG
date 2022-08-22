#include <bits/stdc++.h>
using namespace std;

int main() {

  int A, B, C, D, E;
  int a, b, c, d, e;
  int S;
  
  cin >> A >> B >> C >> D >> E;
  
  a =(A % 10);
  b =(B % 10);
  c =(C % 10);
  d =(D % 10);
  e =(E % 10);
  
  S = A + B + C + D + E - a - b - c - d - e +50;
  
  if(a == 0){
   a=10;
    S = S-10;
  }
  if(b == 0){
    b=10;
  	S = S-10;
  }
  if(c == 0){
    c=10;
  	S = S-10;
  }
  if(d == 0){
    d=10;
  	S = S-10;
  }
  if(e == 0){
    e=10;
  	S = S-10;
  }
  
  for(int i; i<11; i++){
  	if(i==a){
    cout << S+i-10 << endl;
      break;
    }
    if(i==b){
    cout << S+i-10 << endl;
      break;
    }
    if(i==c){
    cout << S+i-10 << endl;
      break;
    }
    if(i==d){
    cout << S+i-10 << endl;
      break;
    }
    if(i==e){
    cout << S+i-10 << endl;
      break;
    }
  }
}