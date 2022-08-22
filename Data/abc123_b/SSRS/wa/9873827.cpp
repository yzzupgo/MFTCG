#include <bits/stdc++.h>
using namespace std;
int main(){
  int A,B,C,D,E;
  cin >> A >> B >> C >> D >> E;
  int L = min(A % 10,min(B % 10,min(C % 10,min(D % 10,E % 10))));
  int F = (A + 9) / 10 + (B + 9) / 10 + (C + 9) / 10 + (D + 9) / 10 + (E + 9) / 10;
  cout << F + L;
}