#include <bits/stdc++.h>
using namespace std;
template<class T> void ckmin(T &a, T b) { a = min(a, b); }
template<class T> void ckmax(T &a, T b) { a = max(a, b); }
#define pb push_back
#define mp make_pair
#define Red ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define F first
#define S second
#define sz(x) (int)x.size()
#define all(x) (x).begin(), (x).end()
#define rep(i,n) for(int i = 0; i < n; ++i)
#define repr(i,n) for(int i = n - 1; i >= 0; --i)
#define Rep(i,a,n) for(int i = (a); i <=(n); ++i)
#define repst(i,n) for(auto it = n.begin(); it != n.end(); ++it)
#define Repr(i,a,n) for(int i = (n); i >= (a); --i)
typedef long long ll;
const int inf = int(1e9);
const int mod = 1e9 + 7;
const int N = 1e6 + 555;
const long double PI = acos(-1.0);
void solve()
{
int a;
cin >> a;
if(a <= 9) cout << (a + a % 2) / 2;
else{
int res = 9, cur = 10, cnt = 0;
while(cur <= a){
if(cnt % 2 == 0 && cnt){
res *= 100;
res += 9;
}
cur *= 10;
cnt++;
}
cur /= 10;
cout << res + (cnt % 2 == 0) * (a - cur + 1);
}
}
int main()
{
Red;
solve();
return 0;
}
