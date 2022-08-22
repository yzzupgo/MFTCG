#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define all(n) begin(n),end(n)
typedef vector<int> vi;
typedef vector<string> vs;
const int mod = 1000000007;
const int inf = 1061109567;
int gcd(int a,int b){return b?gcd(b,a%b):a;}
signed main()
{
int n, l;
cin >> n >> l;
int ans = 0;
rep(i,n) ans += l+i;
if(l > 1) ans -= l;
else if(l+n-1 <= -1) ans -= (l+n-1);
cout << ans << endl;
return 0;
}
