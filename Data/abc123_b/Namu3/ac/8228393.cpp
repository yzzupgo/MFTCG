#include <bits/stdc++.h>
#define rep0(i,n) for (int i = 0; i < (n); ++i)
#define rep1(i,n) for (int i = 1; i < (n); ++i)
#define REP(i,a,b) for (int i = a; i < (b); ++i)
#define mREP(i,a,b) for (int i = a; i > (b); --i)
#define all(x) (x).begin(),(x).end()
const int INF = 1000000007;
typedef long long ll;
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
ll gcd(ll a, ll b) { return b ? gcd(b, a%b) : a; }

int main(){
  vector<int>a(5);
  rep0(i,5)cin >> a[i];
  vector<int>all = {0,1,2,3,4};
  int solve = INF;
  do{
    int ans = 0;
    rep0(j,5){
      while(ans % 10 != 0)ans++;
      ans += a[all[j]];
    }
    solve = min(solve,ans);

  }while(next_permutation(all.begin(),all.end()));

  cout << solve << endl;
  return 0;
}