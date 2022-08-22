#include <bits/stdc++.h>
using namespace std;
#define int long long
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, n) for (int i = 1; i <= (int)(n); i++)
#define FOR(i, m, n) for (int i = m; i<n; i++)
#define SORT(x) sort(x.begin(), x.end())
#define REVE(x) reverse(x.begin(), x.end())
#define ALL(x) (x).begin(), (x).end()
#define SUM(x) accumulate(x.begin(), x.end(),0);
#define vint(v,n) vector<int> v(n); REP(i,n) scanf("%lld", &v[i]);
#define vstr(v,n) vector<string> v(n); REP(i,n) scanf("%lld", &v[i]);
struct initon
{
    initon()
    {
        cin.tie(0);
        ios::sync_with_stdio(false);
    };
};
int k=0,n=0, m=9, l=0,a=0, b=0, c=0, d=0,e=0,ans=0,ans2=0,x=0,y=0;
string s,t,S;
signed main() {
    vint(A, 5);
  bool flag=false;
    REP(i,5){
        if(A[i]%10<m%10&&A[i]%10!=0)m=A[i];
    }
    REP(i,5){
        if(A[i]!=m||flag)while(A[i]%10!=0){
          A[i]++;
        
        }else{
          flag=true;
        }
    }
    ans=SUM(A);
    cout << ans;
}