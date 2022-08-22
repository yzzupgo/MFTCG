#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < (int)(n); i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define ALL(x) (x).begin(),(x).end()
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define INF 999999999
#define PRINT(var) std::cout<<#var"= "<<var<<std::endl

using namespace std;
typedef long long unsigned int ll;
typedef pair<int, int> P;
typedef pair<ll, ll> LP;
typedef pair<int, P> PP;
typedef pair<ll, LP> LPP;

int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n,a,b,x,y;
  vector<int> s(5);
  cin >> s[0] >>s[1] >>s[2]>>s[3]>>s[4];

  b=0;
  x=100;
  y=10;
  REP(i,5){
    if(s[i]%10==0){
      b+=s[i];
    }else{
      if(s[i]%10<x){
        x=s[i]%10;
        y=s[i];
      }
      b+= (s[i]/10+1)*10;
    }
  }
  if(y!=0){
  cout <<b-(10-y%10)<<endl;
  }else{
    cout <<b<<endl;
  }
  return 0;
}
