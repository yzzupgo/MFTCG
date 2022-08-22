#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define pb push_back
#define IOS ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define Test int T;cin>>T;while(T--)
#define ls lower_bound
#define up upper_bound
#define bs binary_search
#define S second
#define F first
#define vi vector<int>
#define pii pair<int,int>
#define vpi vector<pii>
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))
#define m_n(v) *min_element(all(v))
#define m_x(v) *max_element(all(v))
int power(int x, int y,int mod){
int res = 1;
while (y)
{
if (y & 1)
res = (res*x)%mod;
y = y>>1;
x = (x*x)%mod;
}
return res;
}
int modInverse(int a, int m){
int m0 = m;
int y = 0, x = 1;
if (m == 1)
return 0;
while (a > 1)
{
int q = a / m;
int t = m;
m = a % m, a = t;
t = y;
y = x - q * y;
x = t;
}
if (x < 0)
x += m0;
return x;
}
int binomial(int n,int k){
int res = 1;
if ( k > n - k )
k = n - k;
for (int i = 0; i < k; ++i)
{
res *= (n - i);
res /= (i + 1);
}
return res;
}
const int mod=1e9+7;
int32_t main() {
IOS;
int x,y;
cin>>x>>y;
if(y>=2*x and y<=4*x and y%2==0) cout<<"Yes";
else cout<<"No";
return 0;
}
