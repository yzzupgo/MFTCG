#include <bits/stdc++.h>
 
#define int long long
#define double long double
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rerep(i,j,a,b) rep(i,a,b-1) rep(j,i+1,b)
#define rererep(i,j,k,a,b) rep(i,a,b-2) rep(j,i+1,b-1) rep(k,j+1,b)
#define fore(i,a) for(auto &i : a)
#define all(x) (x).begin(),(x).end()
#define fix(i) fixed << setprecision(i)
#define next_p(s) next_permutation(all(s))
#define rep_inf(i) for(int i = 0; i < LLONG_MAX; i++)
 
using namespace std;
 
signed main() {
  int Ans = 0, Max = 10;
  vector<int> a(5);
  rep(i,0,5) {
    cin >> a.at(i);
    Ans += ((a.at(i) + 9) / 10) * 10;
    if(a.at(i)%10) Max = min(Max, a.at(i)% 10);
  }
  Ans -= (10 - Max);
  
  cout << Ans << endl;
}