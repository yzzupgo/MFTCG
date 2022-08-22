#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define vec_input(v) for(auto it=v.begin();it!=v.end();it++){cin>>*it;}
#define vec_debug(v) for(auto it=v.begin();it!=v.end();it++){cerr<<*it<<" ";}cerr<<endl;
#define yn(ans) cout<<(ans?"Yes":"No")<<endl
#define YN(ans) cout<<(ans?"YES":"NO")<<endl
using namespace std;
using ll = long long;
template <typename T>T digitsum(T n);
template <typename T>bool isPrime(T n);
template <typename T>vector<pair<T, T>> prime_factor(T n);
long long int intpow(long long int,long long int);
template <typename T>T intlog(T);
long long int combination(long long int,long long int);
long long int series_sum(long long int);
int main(){
ll x,y;
int ans=0;
cin>>x>>y;
for(int i=1;i<=100;i++){
for(int j=1;j<=100;j++){
if(i+j==x&&2*i+4*j==y){
ans=1;
break;
}
}
}
yn(ans);
}
long long int series_sum(long long int n){
long long int ans=0;
for(long long int i=1;i<=n;i++){
ans+=i;
}
return ans;
}
template <typename T>
T digitsum(T n){
string s=to_string(n);
T sum=0;
T d=1;
for(T e=0;e<s.length();e++){
sum+=(n/d)%10;d*=10;
}
return sum;
}
template <typename T>
bool isPrime(T n){
if(n<=1)return false;
if(n==2)return true;
if(n%2==0)return false;
for(T q=3;q*q<=n;q+=2){
if(n%q==0)return false;
}
return true;
}
template <typename T>
vector<pair<T, T>> prime_factor(T n) {
vector<pair<T, T>> ret;
if(n%2==0){
T tmp = 0;
while (n % 2 == 0) {
tmp++;
n /= 2;
}
ret.push_back(make_pair(2, tmp));
}
for (T i = 3; i*i <= n; i+=2) {
if(n%i==0){
T tmp = 0;
while (n % i == 0) {
tmp++;
n /= i;
}
ret.push_back(make_pair( i, tmp));
}
}
if (n != 1) ret.push_back(make_pair(n, 1));
return ret;
}
long long int intpow(long long int x,long long int n){
long long int ans=1;
for(int i=0;i<n;i++){
ans*=x;
}
return ans;
}
template <typename T>T intlog(T x){
string a=to_string(x);
return a.length()-1;
}
long long int combination(long long int a,long long int b){
queue<long long int> bunsi,bunbo;
long long int ans=1;
b=min(b,a-b);
for(int i=0;i<b;i++){
bunsi.push(a-i);
if(b-i>=2)bunbo.push(b-i);
}
while(bunsi.size()!=0||bunbo.size()!=0){
ans*=bunsi.front();
bunsi.pop();
if(ans%bunbo.front()==0){
ans/=bunbo.front();
bunbo.pop();
}
}
return ans;
}
