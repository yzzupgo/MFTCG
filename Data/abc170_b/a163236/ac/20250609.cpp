#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const long long INF = 1LL << 60;
ll MOD = 1e9+7;
ll nPr(ll n, ll r){
ll ans = 1;
for (ll i = n; i >= r; i--){
ans *= i;
}
return ans;
}
int main() {
int X,Y; cin>>X>>Y;
for (int i = 0; i <= X; ++i) {
if(2*i + 4*(X-i) == Y){
cout<<"Yes"<<endl;
return 0;
}
}
cout<<"No"<<endl;
return 0;
}
