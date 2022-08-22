#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pii > vii;
typedef vector<pll > vll;
#define pb push_back
#define mp make_pair
#define ar array
#define mod 1000000007
#define F first
#define S second
#define p(s) cout<<(s)<<endl
#define p2(s,t) cout << (s) << " " << (t) << endl
#define For(i,a,b) for(__typeof (a) i=a; i<=b; i++)
#define inp_arr(a,n) for(__typeof (n) i=0; i<n; ++i) {cin>>a[i];}
#define debug_arr(a,n) {{for(__typeof (n) i=0; i<n; ++i) {cout<<a[i]<<" ";}cout<<"\n";}}
#define INF 1e9
ll power(ll x, ll y)
{
ll res = 1;
while (y > 0) {
if (y & 1)
res = (res*x)%mod;
y = y>>1;
x = (x*x)%mod;
}
return res%mod;
}
bool comparep(pair<ll, ll> i1, pair<ll, ll> i2){
return (i1.S < i2.S);
}
ll modInverse(ll a)
{
return power(a , mod - 2);
}
ll val(ll a[],ll n, ll val){
ll count = 0;
ll sum = 0;
for(ll i = 0;i<n;i++){
sum += a[i];
if(sum > val){
sum = a[i];
count++;
}
}
return count+1;
}
ar<ll,2> med = {-1};
set<ar<ll,2>> top;
set<ar<ll,2>> bottom;
ll st = 0;
ll sb = 0;
void balance(){
if(bottom.size() > top.size()){
top.insert(med);
st += med[0];
med = *--bottom.end();
bottom.erase(med);
sb -= med[0];
}
else if((bottom.size()+1) < top.size()){
bottom.insert(med);
sb += med[0];
med = *top.begin();
top.erase(med);
st -= med[0];
}
}
void add(ar<ll,2> x){
ar<ll,2> x1 = {-1};
if(med == x1){
med = x;
}
else if(x > med){
top.insert(x);
st += x[0];
}
else{
bottom.insert(x);
sb += x[0];
}
balance();
}
void remove(ar<ll,2> x){
if(med == x){
if(top.size() >= 1){
med = *top.begin();
top.erase(med);
st -= med[0];
}
else{
med = {-1};
}
}
else if(x < med){
bottom.erase(x);
sb -= x[0];
}
else{
top.erase(x);
st -= x[0];
}
balance();
}
vector<vector<ll>> graph;
vector<ll> parent;
ll flag = 0;
ll a = -1;
ll b = -1;
void add_edge(ll a, ll b){
graph[a].pb(b);
graph[b].pb(a);
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
ll t;
t = 1;
for(ll z=0;z<t;z++){
ll x,y;
cin>>x>>y;
int flag = 0;
for(ll i=1;i<=x;i++){
for(ll j=1;j<=x;j++){
if((i+j) == x && (2*i+4*j) == y){
flag = 1;
break;
}
}
}
if(flag == 1)
cout<<"Yes";
else
cout<<"No";
}
}
