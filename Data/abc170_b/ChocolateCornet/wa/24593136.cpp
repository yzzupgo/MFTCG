#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define _GLIBCXX_DEBUG
#define rep(i,n) for(int i=0;i<n;++i)
ll MAX(ll x,ll y){
if(x>=y)return x;
else return y;
}
ll MIN(ll x,ll y){
if(x>=y)return y;
else return x;
}
ll gcd(ll x,ll y){
if(x<y)swap(x,y);
if(y==0)return x;
return gcd(y,x%y);
}
ll lcm(ll a,ll b){
return a*b/gcd(a,b);
}
string to_k(ll k,ll n){
string s;
while(n){
s = to_string(n%k) + s;
n /= k;
}
return s;
}
int main(){
int X,Y;
cin>>X>>Y;
bool Q=false;
for(int i=0;i<=X;i++){
if(Y-2*i>=0&&(Y-2*i)%4==0&&(Y-2*i)/4+i<=X)Q=true;
}
if(Q)cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
