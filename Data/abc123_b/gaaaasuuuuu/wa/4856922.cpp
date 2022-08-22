#include <bits/stdc++.h>
using namespace std;


int main(){
  int a,b,c,d,e,n,m,count;
  cin >> a >>  b >> c >> d >> e;
  vector<int> v = {a,b,c,d,e};
  n = 9;
  for(int i=0; i < 5; i++){
    if(v.at(i) % 10 ==0){
      count++;
      continue;
    }
    if( v.at(i) % 10 < n)
      n = v.at(i) % 10;
  }
  m = a / 10 * 10 + b / 10 * 10 + c / 10 * 10 + d / 10 * 10 + e / 10 * 10 + 40 + n - count * 10;
  cout << m << endl;
  
      }