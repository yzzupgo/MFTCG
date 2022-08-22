#include <bits/stdc++.h>
#include <math.h>
#define REP(i, n) for(int i = 0; i < (n); i++)
#define ALL(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
const int INF = 1001001001;
const int mINF = -1001001001;


int main() {
int a[5];
int ans = 0;
int a_max=0;
REP(i,5) {
  cin >> a[i];
  if(a[i]%10!=0) {
    a_max=max(a_max,10-a[i]%10);
    a[i]+=10-(a[i]%10);
  }
  ans += a[i];
}
ans-=a_max;
cout << ans << endl;
return 0;
}
