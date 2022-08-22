#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, n) for (int i=1; i < (int)(n); i++)
#define rrep(i, n) for (int i=((int)(n)-1); i>=0; i--)
#define rreps(i, n) for (int i=((int)(n)-1); i>0; i--)
#define ALL(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
using namespace std;
using lint = long long;
// using p = pair<int, int>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
// #define DEBUG

int main() {
  #ifdef DEBUG
  const time_t START_MILLISEC = time(NULL) * 1000;
  #endif
  const int N = 5;
  vector<int> order = {0, 1, 2, 3, 4};
  vector<int> A(N);
  bool allzero = true;
  rep (i, N) {
    cin >> A[i];
    if (A[i] % 10 != 0) allzero = false;
  }
  if (allzero) {
    cout << accumulate(A.begin(), A.end(), 0) << endl; 
    return 0;
  }

  int mod = 1e9, modi = -1;
  rep (i, N) if (A[i]%10 > 0 && chmin(mod, A[i]%10)) modi = i;
  int ans = 0;
  rep (i, N) {
    ans += A[i];
    if (i == modi) continue;
    if (A[i] % 10 == 0) continue;
    else ans += 10 - (A[i] % 10);
  }
    
  cout << ans << endl;
  #ifdef DEBUG
  const time_t END_MILLISEC = time(NULL) * 1000;
    cout << END_MILLISEC - START_MILLISEC << endl;
  #endif
  return 0;
}