#include<bits/stdc++.h>
#define REP(i,n) for (int i = 0; i < n ; i++)
#define FOR(i,a,b) for (int i = (a); i < (b); i++)
#define whole(f,x,...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x)
using namespace std;
typedef long long ll;
const int INF = 1e9;
int main(void){
int n, l; cin >> n >> l;
vector<int> apple(n);
REP(i, n) apple[i] = l + i;
int ans = 0;
REP(i, n) ans += apple[i];
int hiki;
if(l <= 0 and l + n - 1 >= 0) hiki = 0;
else if(l < 0 and l + n - 1 < 0) hiki = l + n - 1;
else if(l > 0) hiki = l;
cout << ans - hiki << endl;
}
