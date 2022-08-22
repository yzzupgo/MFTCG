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
  cout << A+B+C+D+E-a-b-c-d-e+min({a,b,c,d,e})+40 << endl;
}