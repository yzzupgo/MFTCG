#include <bits/stdc++.h>
using namespace std;
int main(){
  int A,B,C,D,E,a,b,c,d,e;
  cin>>A>>B>>C>>D>>E;
  a=(A+9)/10;b=(B+9)/10;
  c=(C+9)/10;d=(D+9)/10;
  e=(E+9)/10;
  a*=10;b*=10;c*=10;d*=10;e*=10;
  cout<<a+b+c+d+e-max({a-A,b-B,c-C,d-D,e-E})<<endl;
}