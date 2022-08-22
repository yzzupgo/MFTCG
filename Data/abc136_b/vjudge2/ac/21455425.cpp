#include <bits/stdc++.h>
#define pb push_back
#define int long long
#define vi vector<int>
#define INF INT_MAX
#define mod 1000000007
#define rep(i,a,n) for(int i = a; i <= n; i++)
#define ff first
#define ss second
const int N = 1e9 + 1;
using namespace std;
bool isodd(int n){
int cnt = 0;
while(n > 0){
cnt++;
n = n/10;
}
if(cnt&1){
return 1;
}
else{
return 0;
}
}
void solve(){
int n;
cin >> n;
int cnt = 0;
for(int i = 1; i <= n; i++){
if(isodd(i)){
cnt++;
}
}
cout << cnt << endl;
}
signed main(){
ios_base::sync_with_stdio(false);
cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int t = 1;
while(t--){
solve();
}
return 0;
}
