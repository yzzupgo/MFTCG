#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define FORL(i,x) for(int i=head[x];i;i=nxt[i])
#define ALL(a)  (a).begin(),(a).end()
#define SZ(a) int((a).size())
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())
#define PB push_back
#define MP make_pair
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main()
{
  int a[5];
  cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];

  int sum = 0;
  int last = 0;
  int last_num = 0;

  FOR(i,0,4){
    if(10-a[i]%10>last && a[i]%10!=0){
      last = 10-a[i]%10;
      last_num = i;
      // cout << last << endl;
    }
  }

  FOR(i,0,4){
    sum += a[i];
    sum += (10-a[i]%10)%10;
    // cout << sum << endl;
  }

  if(last==99) cout << sum << endl;
  else cout << sum - last << endl;
  
  
}

