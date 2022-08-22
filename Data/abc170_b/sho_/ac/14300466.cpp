#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int (i) = 0; (i) <(n); (i)++)
#define so(v) sort(v.begin(),v.end())
using ll = long long;
using vi=vector<int>;
using vvi=vector<vi>;
const int MAX = 510000;
const int MOD = 1000000007;
ll gcd(ll a, ll b)
{
if (a%b == 0)
{
return(b);
}
else
{
return(gcd(b, a%b));
}
}
ll lcm(ll a, ll b)
{
return a * b / gcd(a, b);
}
long long fac[MAX], finv[MAX], inv[MAX];
void COMinit() {
fac[0] = fac[1] = 1;
finv[0] = finv[1] = 1;
inv[1] = 1;
for (int i = 2; i < MAX; i++){
fac[i] = fac[i - 1] * i % MOD;
inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
finv[i] = finv[i - 1] * inv[i] % MOD;
}
}
long long com(int n, int k){
if (n < k) return 0;
if (n < 0 || k < 0) return 0;
return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}
int main() {
int a,b;
cin>>b>>a;
if(a%2!=0){
cout<<"No"<<endl;
return 0;
}
if((a/2-b>=0)&&(2*b-a/2>=0)){
cout<<"Yes"<<endl;
}
else cout<<"No"<<endl;
}
