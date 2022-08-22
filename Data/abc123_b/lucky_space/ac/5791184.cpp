#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int A,B,C,D,E;
  cin >> A >> B >> C >> D >> E;
  int a,b,c,d,e;
  a=A%10;
  b=B%10;
  c=C%10;
  d=D%10;
  e=E%10;
  int aa,bb,cc,dd,ee;
  aa=(A-1)%10;
  bb=(B-1)%10;
  cc=(C-1)%10;
  dd=(D-1)%10;
  ee=(E-1)%10;
  cout << A+B+C+D+E-aa-bb-cc-dd-ee+min({aa,bb,cc,dd,ee})+36 << endl;
}