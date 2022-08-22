#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define repp(i, n, m) for (int i = (int)(n); i < (int)(m); i++)
#define rrep(i, n, m) for (int i = n; i >= m; i--)
#define ALL(a) (a).begin(), (a).end()
#define p(a, b) printf(a, b);
#define c(s) cout << (s) << endl;
#define yes cout << "yes" << endl;
#define no cout << "no" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define cyn(c) cout << (c ? "Yes" : "No") << endl;
#define cYN(c) cout << (c ? "YES" : "NO") << endl;
#define pyn(c) printf("%s\n", c ? "Yes" : "No");
#define pYN(c) printf("%s\n", c ? "YES" : "NO");
#define INF 1e18
typedef long long LL;
typedef unsigned long long ULL;
typedef pair<LL, LL> P;
template <class T>
bool contain(const std::string &s, const T &v)
{
  return s.find(v) != std::string::npos;
}
ULL mod = 1e9 + 7;

int main()
{
  int a[5]={},v_max=0,ans=0;
  rep(i,5){
    cin >> a[i];
    if(a[i]%10==0){
      ans += a[i];
    }else{
       ans += a[i] + (10 - a[i]%10);
       v_max = max(v_max,10 - a[i]%10);
    }
    // c(ans);
  }
  cout << ans - v_max << endl;
}