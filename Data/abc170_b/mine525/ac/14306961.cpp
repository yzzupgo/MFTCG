#include "bits/stdc++.h"
using namespace std;
using ll = long long int;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
#define pi 3.14159265358979323846
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
ll cnt_rep = 0;
ll powmod(ll N, ll P, ll M){
cnt_rep++;
if(P == 0) return 1;
if(P%2 == 0){
ll t = powmod(N, P/2, M);
return t*t % M;
}
return (N * powmod(N, P-1, M)) % M;
}
ll gcd(ll a, ll b){
ll resi, g, l;
if(a > b){
g = a; l = b;
}else if(b > a){
g = b; l = a;
}else{
return a;
}
resi = g % l;
if(resi != 0){
return gcd(l, resi);
}else{
return l;
}
}
template<typename T>
void remove(std::vector<T>& vector, unsigned int index)
{
vector.erase(vector.begin() + index);
}
int ans = 0;
int N, M, Q;
template<typename T>
void showall(vector<T> v){
rep(i, 0, v.size()){
cout << v[i] << " ";
}
cout << endl;
}
template<typename T>
ll com(T n, T m, T mod){
ll a = 1, b = 1, ans;
if(n == m || m == 0){
ans = 1;
}else{
for(ll i = 0;i < m; i++){
a *= n-i;
a %= mod;
b *= i+1;
b %= mod;
}
ans = (a * powmod(b, mod-2, mod)) % mod;
}
return ans;
}
int main() {
int X, Y;
cin >> X >> Y;
int a = (Y-2*X);
if(a % 2 != 0){
cout << "No" << endl;
return 0;
}
a /= 2;
int b = (4*X-Y);
if(b % 2 != 0){
cout << "No" << endl;
return 0;
}
b /= 2;
if(a < 0 || b < 0){
cout << "No" << endl;
}else{
cout << "Yes" << endl;
}
}
