#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sz(x) ((int)(x).size())
#define in(x) int x;cin>>x
#define bit(n) (1<<(n))
#define out(x) cout<<(x)<<endl;
#define err(x) cerr<<(x)<<endl;
#define errr(x,y) cerr<<(x)<<" "<<(y)<<endl;
#define rep(i,n) for (int i=0;i<(n);i++)
#define repp(i,n) for (int i=1;i<=(n);i++)
#define inf5 100002
#define inf9 1000000002
int main(){
int ans = 0, d = 0;
in(n);
d = to_string(n).length();
if (d == 1) {
ans = n;
} else {
if (d % 2) {
rep(i, (d - 1) / 2) ans += pow(10, i * 2 + 1) - pow(10, i * 2);
int r = pow(10, d);
ans += n % r - pow(10, d - 1) + 1;
} else {
rep(i, d / 2) ans += pow(10, i * 2 + 1) - pow(10, i * 2);
}
}
cout << ans << endl;
return 0;
}
