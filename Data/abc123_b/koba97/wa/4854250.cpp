#include <bits/stdc++.h>
using namespace std;

int main() {
  int A,B,C,D,E,a,b,c,d,e;
  cin >> A >> B >> C >> D >> E;

  a=A%10;
  b=B%10;
  c=C%10;
  d=D%10;
  e=E%10;
  
  if ((a<=b)&&(a<=c)&&(a<=d)&&(a<=e)) 
    cout << A+B+C+D+E+40-(b+c+d+e) << endl;
  if ((b<=a)&&(b<=c)&&(b<=d)&&(b<=e)) 
    cout << A+B+C+D+E+40-(a+c+d+e) << endl;
  if ((c<=a)&&(c<=b)&&(c<=d)&&(c<=e)) 
    cout << A+B+C+D+E+40-(a+b+d+e) << endl;
  if ((d<=a)&&(d<=b)&&(d<=c)&&(d<=e)) 
    cout << A+B+C+D+E+40-(a+b+c+e) << endl;
  if ((e<=a)&&(e<=b)&&(e<=c)&&(e<=d)) 
    cout << A+B+C+D+E+40-(a+b+c+d) << endl;
        
}
