#include <bits/stdc++.h>
using namespace std;
int main(){
  int A,B,C,D,E;
  cin >> A >> B >> C >> D >> E;
  int L = (min((A + 9) % 10,min((B + 9) % 10,min((C + 9) % 10,min((D + 9) % 10,(E + 9) % 10)))) + 1) % 10;
  int F = (A + 9) / 10 + (B + 9) / 10 + (C + 9) / 10 + (D + 9) / 10 + (E + 9) / 10;
  cout << F * 10 - 10 + L;
}