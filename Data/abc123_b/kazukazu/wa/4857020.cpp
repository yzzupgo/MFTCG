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
    int a[5]={},v2,v_min=10,min_index=0,sum=0;
    for(int i=0; i<5; i++){
      cin>>a[i];
      v2 = a[i] % 10;
      if(v2 != 0 && v2 <= 5){
        v_min = v2;
        min_index = i;
      }
    }
    // cout<<a[min_index]<<endl;
    for(int i=0; i<5; i++){
      if(a[i]%10 == 0){
        sum += a[i];
      }else if(i!=min_index){
        sum += a[i] + (10-a[i]%10);
      }else{
        sum += a[min_index];
      }
      // cout<<"sum"<<sum<<endl;
    }
    cout<<sum<<endl;
}
