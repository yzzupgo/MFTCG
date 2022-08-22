#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define pi 3.14159265359
#define MOD 1000000007
#define str string
#define vll vector<ll>
#define vstr vector<str>
#define vchar vector<char>
#define pb push_back
#define mll map<ll,ll>
#define mchar map<char, ll>
#define mstr map<str,ll>
#define vp vector< pair<ll,ll> >
#define mp make_pair
#define ff first
#define ss second
#define pll pair<ll,ll>
#define f(x,y) for(int x=0;x<y;x++)
#define r(x,y) for(int x=y;x>=0;x--)
#define loop(x,y,z) for(int x=y;x<z;x++)
ll power(ll a, ll b) {
ll res = 1;
while (b > 0) {
if (b & 1)
res = res * a;
a = a * a;
b >>= 1;
}
return res;
}
ll logx(ll base, ll num){int cnt=0;while(num!=1){num/=base; ++cnt;}return cnt;}
ll gcd(ll a, ll b){
if(b == 0)
return a;
return gcd(b, a % b);
}
ll lcm(ll a, ll b){
return (a/gcd(a, b))*b;
}
void print(vll a){
for(int i=0;i<a.size();i++){
cout<<a[i]<<' ';
}
cout<<endl;
}
int main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
ll x,y;
cin>>x>>y;
ll x1=x;
mll m;
while(x1>=0){
ll k=x-x1;
ll ans=x1*4+k*2;
m[ans]++;
x1--;
}
if(m.find(y)==m.end()){
cout<<"No";
}
else{
cout<<"Yes";
}
return 0;
}
