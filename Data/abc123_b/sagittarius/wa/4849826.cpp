#include<iostream>
using namespace std;

int main() {
  int A, B, C, D, E;
  cin >> A >> B >> C >> D >> E;
  int r;
  if(A % 10 != 0){
    r = A % 10;
    A = (A / 10 + 1) * 10;
  }
  if(B % 10 != 0){
    if(r > B % 10) {
      r = B % 10;
    }
    B = (B / 10 + 1) * 10;
  }
  if(C % 10 != 0){
    if(r > C % 10) {
      r = C % 10;
    }
    C = (C / 10 + 1) * 10;
  }
  if(D % 10 != 0){
    if(r > D % 10) {
      r = D % 10;
    }
    D = (D / 10 + 1) * 10;
  }
  if(E % 10 != 0){
    if(r > E % 10) {
      r = E % 10;
    }
    E = (E / 10 + 1) * 10;
  }
  cout << A+B+C+D+E-10+r << endl;
  return 0;
}