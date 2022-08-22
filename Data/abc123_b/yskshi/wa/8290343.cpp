#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REPl(i, n) for (ll i = 0; i < (ll)(n); i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define REPRl(i, n) for(ll i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < (int)n; i++)
#define FORl(i, m, n) for(ll i = m; i < (ll)n; i++)
#define ALL(v) v.begin(), v.end()
ll gcd(ll a,ll b) {
  return b? gcd(b,a%b): a;  
}
ll lcm(ll a,ll b) {
  return a*b/gcd(a,b);
}
int main() {
  vector<int> a(5);
  REP(i,5){
    cin>>a[i];
  }
  int min=10;
  int sum=0;
  REP(i,5){
    int lowest=a[i]%10;
    if(lowest<min){
      min=lowest;
    }
    int tmp=(lowest==0?a[i]:((a[i]/10+1)*10));
    sum+=tmp;
  }
  sum-=(10-min);
  cout << sum << endl;
}