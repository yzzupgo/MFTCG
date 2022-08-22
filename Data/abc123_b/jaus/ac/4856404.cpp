#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
typedef long long i64;
int main(){
    int A[5];
    int reast_i = -1;
    int reast = 9;
    rep(i,5){
      cin >> A[i];
      if(A[i]%10!=0 && A[i]%10<=reast){
        reast = A[i]%10;
        reast_i = i;
      }
    }
    int result = 0;
    rep(i,5){
      if(A[i]%10==0 || reast_i==i) result+=A[i];
      else result+=A[i]+10-A[i]%10;
    }
    cout << result << endl;
}