#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long A,B,C,D,E,T;
  cin >> A >> B >> C >> D >> E;
  cout << A+B+C+D+E-(A%10+B%10+C%10+D%10+E%10)+41+min(min((A-1)%10,(B-1)%10),min(min((C-1)%10,(D-1)%10),(E-1)%10)) << endl;
  
  
}
