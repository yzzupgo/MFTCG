#include<iostream>
#include<algorithm>
#include<vector>
#include<iomanip>
#include<cmath>
#include<map>
using namespace std;
#define rep(i,N) for(int i=0;i<N;i++)
typedef long long ll;
ll binary_search(vector<ll> a, ll n, ll key){
ll right = n, left = -1;
ll md = (right + left) / 2;
while(right - left > 1){
if(a[md] <= key){
right = md;
}else{
left = md;
}
md = (right + left) / 2;
}
if(left == -1) return -1;
return right;
}
vector<ll> prime;
void Prime(ll n){
vector<ll> p(n,0);
p[0]=1;
p[1]=1;
for(ll i=2;i<n;i++){
if(p[i]==0){
prime.push_back(i);
p[i]=i;
}
ll k=prime.size();
for(ll j=0;j<k && i*prime[j]<n && prime[j]<=p[i];j++){
p[i*prime[j]]=prime[j];
}
}
}
ll gcd(ll a,ll b){
if(a<b){
swap(a,b);
}
ll r=a%b;
while(r!=0){
a=b;
b=r;
r=a%b;
}
return b;
}
#define MOD ((ll)1e+9 + 7)
int main(){
ll n;
cin>>n;
ll o=1,e=10;
ll ans=0;
bool s=true;
while(o<=n){
if(s){
ans+=(min(n,e)-o);
}
else{
s=!s;
}
o*=10;
e*=10;
}
cout<<ans<<endl;
return 0;
}
