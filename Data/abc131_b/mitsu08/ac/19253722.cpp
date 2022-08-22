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
vi v(n);
bool check = false;
rep(i,n) {
v[i] = l+i;
ans += v[i];
if(v[i] == 0) check = true;
}
if(!check){
if(abs(v[0]) < abs(v[n-1])) ans -= v[0];
else ans -= v[n-1];
}
cout << ans << endl;
return 0;
}
