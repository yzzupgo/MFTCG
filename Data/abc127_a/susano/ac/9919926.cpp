#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define repr(i,n) for (int i = (int)(n); i >= 0; i--)
#define REP(i,m,n) for (int i = (int)(m); i < (int)(n); i++)
#define INF 1e9
#define all(v) v.begin(), v.end()
typedef long long ll;
int main(){
int a, b;
cin >> a >> b;
int ans = 0;
if(a > 12) ans = b;
else if(a >= 6) ans = b/2;
cout << ans << endl;
return 0;
}
