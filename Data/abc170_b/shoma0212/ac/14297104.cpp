#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define pb push_back
#define sort(s) sort(s.begin(),s.end())
#define reverse(s) reverse(s.begin(),s.end())
#define rep(i,n) for(ll (i)=0;(i)<(n);(i)++)
const ll mod = 1e9+7;
ll gcd(ll a, ll b) {
return b ? gcd(b, a%b) : a;
}
ll lcm(ll a, ll b) {
return a / gcd(a, b) * b;
}
bool isPrime(ll x){
ll i;
if(x < 2)return 0;
else if(x == 2) return 1;
if(x%2 == 0) return 0;
for(i = 3; i*i <= x; i += 2) if(x%i == 0) return 0;
return 1;
}
int digsum(ll n) {
int res = 0;
while(n > 0) {
res += n%10;
n /= 10;
}
return res;
}
int dignum(ll n) {
int res = 0;
while(n > 0) {
res++;
n /= 10;
}
return res;
}
ll stringcount(string s,char c){
return count(s.cbegin(),s.cend(),c);
}
ll ka(ll i){
ll res=1;
while(i>0){
res=res*i;
i--;
}
return res;
}
ll ncr(ll x,ll y){
ll a = x;
ll b = 1;
if(y>(x/2)){
y=x-y;
}
for(ll i=1;i<y;i++){
a*=x-i;
b*=i+1;
}
return a/b;
}
ll f(ll x){
ll dp[x+1];
dp[1]=1;
dp[2]=1;
for(ll i=3;i<=x;i++){
dp[i]=dp[i-1]+dp[i-2];
}
return dp[x];
}
int ctoi(char c){
return c-'0';
}
vector<pair<long long, long long> > prime_factorize(long long N) {
vector<pair<long long, long long> > res;
for (long long a = 2; a * a <= N; ++a) {
if (N % a != 0) continue;
long long ex = 0;
while (N % a == 0) {
++ex;
N /= a;
}
res.push_back({a, ex});
}
if (N != 1) res.push_back({N, 1});
return res;
}
int main(){
int x,y;
cin >> x >> y;
for(int i=0;i<=x;i++){
if(i*2+(x-i)*4==y){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
