#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define x first
#define y second
#define sz(v) (int)v.size()
#define all(x) (x).begin(),(x).end()
#define PI 3.14159265358979
#define N 200005
int solve(){
int x,y; cin>>x>>y;
int b=x-2*y;
if(b%2){
cout<<"No";
return 0;
}
b/=2;
int a=x-b;
if(a>=0&&b>=0) cout<<"Yes";
else cout<<"No";
return 0;
}
signed main() {
ios::sync_with_stdio(0);
int t=1;
while(t--) solve();
return 0;
}
