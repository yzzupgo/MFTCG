#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define repp(i, n, m) for (int i = (int)(n); i < (int)(m); i++)
#define rrep(i, n, m) for (int i = n; i >= m; i--)
#define ALL(a) (a).begin(), (a).end()
#define p(a, b) printf(a, b);
#define c(s) cout << (s) << endl;
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
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

int main(){
    int a[5]={},vmax=0,vindex=0,sum=0;
    rep(i,5){
      cin>>a[i];
      if(a[i]%10 != 0 && (10 - a[i]%10) > vmax){
        vmax = 10 - a[i]%10;
        vindex = i;
      }
    }
    // cout<<"vi:"<<a[vindex]<<endl;
    rep(i,5){
      if(i==vindex || a[i]%10 == 0){
        sum += a[i];
      }else{
        sum += a[i] + (10-a[i]%10);
      }
    }

    cout<<sum<<endl;
}
