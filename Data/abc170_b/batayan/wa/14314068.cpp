#include <bits/stdc++.h>
#define PI 3.14159265359
#define rep(i,a,n) for(int i=a;i<(int)n;++i)
#define SZ(x) ((int)(x).size())
#define descSort(a) sort(a.begin(),a.end(),std::greater<int>())
using namespace std;
typedef long long ll;
const ll INF = 1e9 + 7;
ll gcd(ll x,ll y){
if(y==0)return x;
return gcd(y,x%y);
}
ll LCM(ll a, ll b){
return a/gcd(a,b)*b;
}
int main(void)
{
int x,y;
cin>>x>>y;
int a=x*4-y;
int turu=ceil((double)a/2);
int kame=x-turu;
if(turu<0||kame<0)cout<<"No"<<endl;
else cout<<"Yes"<<endl;
return 0;
}
