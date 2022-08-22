#include<bits/stdc++.h>
using namespace std;
#define IOS cin.sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pii pair<int,int>
#define pb push_back
#define vi vector<int>
using ll = long long;
const int mod = 1e9 + 7;
ll pwr(ll a, ll b);
int main(){
IOS
int x, y; cin>>x>>y;
int b = y - 2 * x;
if(b < 0){
cout<<"No";
return 0;
}
if(b & 1)cout<<"No";
else{
b /= 2;
if(x - b >= 0)cout<<"Yes";
else cout<<"No";
}
}
ll pwr(ll a, ll b){
a %= mod;
ll res = 1;
while(b > 0){
if(b&1) res = res * a % mod;
a = a * a % mod;
b >>= 1;
}
return res;
}
