#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll maxn=1e7;
ll n,x,y,d[maxn],flag;
string s;
void solve(){
flag=0;
cin>>x>>y;
for (ll i = 0; i <= x; i++) {
if (2 * i + 4 * (x-i) == y) {
flag = 1;
}
}
if(flag==1) cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
int main() {
solve();
return 0;
}
