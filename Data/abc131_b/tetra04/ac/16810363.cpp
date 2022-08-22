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
#define MOD ((ll)1e+9 + 7)
int main(){
int n,l;
cin>>n>>l;
int ans=0,c=300;
rep(i,n){
ans+=l+i;
if(abs(c)>abs(l+i)){
c=l+i;
}
}
cout<<ans-c<<endl;
return 0;
}
