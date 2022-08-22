#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i=(a); i<b; i++)
#define REP(i, n)    for(int i=0; i<(n); i++)
#define fst first
#define pb push_back
#define mp make_pair
#define ALL(obj) (obj).begin(), (obj).end()
using ul = unsigned long;
using ll = long long;
const int INF = 100100100;
const int MOD = (int)1e9 + 7;

int a10(int x){
  return (x-1) - ((x-1)%10) +10;
}

int main(void)
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  int a[5];
  cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];

  int last = min( min( min((a[0]-1)%10,(a[1]-1)%10), min((a[2]-1)%10,(a[3]-1)%10) ), (a[4]-1)%10 );

  int num;
  REP(i, 5){
    if( (last)==((a[i]-1)%10) ){
      num = i;
      break;
    }
  }

  int ans = a10(a[0])+a10(a[1])+a10(a[2])+a10(a[3])+a10(a[4]) -(10-a[num]%10);

  cout << ans << endl;

  return 0;
}
