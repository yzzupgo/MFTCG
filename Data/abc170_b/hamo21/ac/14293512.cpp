#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
typedef long double ld;
const ll MOD=1000000007;
const ll MODA=998244353;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
long long gcd(long long a,long long b){
ll gcdmax=max(a,b);
ll gcdmin=min(a,b);
while(true){
if(gcdmax%gcdmin==0)break;
else gcdmax%=gcdmin;
swap(gcdmin,gcdmax);
}
return gcdmin;
}
ll powerup(ll N,ll P,ll M){
if(P==0)return 1;
else if(P%2==0){
ll t=powerup(N,P/2,M);
return t*t%M;
}
else return N*powerup(N,P-1,M)%M;
}
vector<ll> find_divisor(ll N){
ll k=1;
while(k*k<=N){
k++;
}
vector<ll> A(1);
rep(i,k){
if(i==1)A.at(0)=1;
else if(i>=2){
if(N%i==0)A.push_back(i);
}
}
ll t=0;
t=A.size();
rep(i,t){
if(A.at(t-i-1)*A.at(t-i-1)!=N)A.push_back(N/A.at(t-1-i));
}
return A;
}
vector<ll> fac;
vector<ll> finv;
vector<ll> inv;
void COMinit(ll N,ll P){
rep(i,N+1){
if(i==0){
fac.push_back(1);
finv.push_back(1);
inv.push_back(1);
}
else if(i==1){
fac.push_back(1);
finv.push_back(1);
inv.push_back(1);
}
else{
fac.push_back(fac.at(i-1)*i%P);
inv.push_back(P-inv.at(P%i)*(P/i)%P);
finv.push_back(finv.at(i-1)*inv.at(i)%P);
}
}
}
ll COM(ll n,ll k,ll P){
if(n<k)return 0;
if(n<0||k<0)return 0;
return fac.at(n)*(finv.at(k)*finv.at(n-k)%P)%P;
}
int main()
{
ll X,Y;
cin>>X>>Y;
if(Y%2==1)cout<<"No"<<endl;
else if(2*X<=Y&&Y<=4*X)cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
