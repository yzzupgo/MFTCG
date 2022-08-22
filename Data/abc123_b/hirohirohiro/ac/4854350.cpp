#include<iostream>
using namespace std;
int main(){
  int  A[5];
  int k = 10, l = 0, m = 0, ans = 0;
  for (int i = 0; i < 5; ++i){
    cin >> A[i];
    if(k > A[i]%10 && A[i]%10 != 0) {
      k = A[i]%10;
      l = A[i];
    }
  m += (A[i] + 9)/10;
  }
  ans = (m - (l + 9)/10)*10 + l;
  cout << ans << endl;
    return 0;
}