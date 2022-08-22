#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
 
int main() {
  vector<int> A(5);
  rep(i,5)cin>>A[i];
  int m=10;
  int M;
  int ans=0;
  rep(i,5){
    if(A[i]%10==0)ans+=A[i];
    else if(A[i]%10<m){
      ans+=(M+10-m);      
      m=A[i]%10;
      M=A[i];
    }
    else{
      ans+=A[i]+10-(A[i]%10);
    }
  }
  ans+=M;
  cout<<ans<<endl;
  return 0;
}