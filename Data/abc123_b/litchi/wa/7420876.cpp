#include <bits/stdc++.h>
using namespace std;
int main(){
  double A[5];
  cin >> A[0] >> A[1] >> A[2] >> A[3] >> A[4];
  int min=10;
  for(int i=0;i<5;i++){
    if (int(A[i])%10!=0 && min>int(A[i])%10){
      min=int(A[i])%10;
    }
  }
  if (min == 10) min=0;
  min=10-min;
  cout << ceil(A[0]/10.0)*10 + ceil(A[1]/10.0)*10 +ceil(A[2]/10.0)*10+ceil(A[3]/10.0)*10+ceil(A[4]/10.0)*10-min;
}
