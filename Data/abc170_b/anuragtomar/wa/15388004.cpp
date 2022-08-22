#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define pb push_back
#define mp make_pair
bool isPrime(ll n)
{
if (n <= 1) return false;
if (n <= 3) return true;
if (n%2 == 0 || n%3 == 0) return false;
for (ll i=5; i*i<=n; i=i+6)
if (n%i == 0 || n%(i+2) == 0)
return false;
return true;
}
ll minthis(ll a, ll b){
if(a < b){
return a;
}
return b;
}
ll maxthis(ll a, ll b){
if(a > b){
return a;
}
return b;
}
int gcd(int a, int b){
if( a<0 ) a = -a;
if( b<0 ) b = -b;
while( b!=0 ){
a %= b;
if( a==0 ) return b;
b %= a;
}
return a;
}
int findLargestDivisor(int n)
{
int max = 1;
for (int i = 2; i < n; i++) {
if(n %(i) == 0) {
max = i;
}
}
return max;
}
ll power(ll x, ll y)
{
ll temp;
if(y == 0)
return 1;
temp = power(x, y / 2);
if (y % 2 == 0)
return temp * temp;
else
{
if(y > 0)
return x * temp * temp;
else
return (temp * temp) / x;
}
}
bool sortbysec(const pair<int, int>& a,
const pair<int, int>& b)
{
return (a.second < b.second);
}
void solve(){
int n , m;
cin >> n >> m;
int flag = 0;
for(int i = 0 ; i <= n ; i++){
for(int j = 0 ; j <= n ; j++){
if(i+j == n && (4*i+2*j) == m){
flag = 1;break;
}
}
}
if(flag == 0) cout << "NO" << "\n";
else cout << "YES" << "\n";
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int t = 1;
while(t--){
solve();
}
return 0;
}
