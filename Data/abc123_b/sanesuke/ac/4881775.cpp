#include <bits/stdc++.h>
using namespace std;

int main(){
  int A[5],B[5];
  for(int i=0;i<5;i++){
    cin>>A[i];
    B[i] = A[i]%10;
    if(B[i] == 0) B[i]=10;
  }
  int m=10;
  for(int i=0;i<5;i++){
    m = min(m,B[i]);
  }
  int ans = 0;
  for(int i=0;i<5;i++){
    ans += (A[i]-1)/10*10+10;
  }
  ans -=10;
  ans += m;
  cout << ans << endl;
}