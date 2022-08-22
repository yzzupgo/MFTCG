#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
const ll mod = 1000000007;
const ll inf = (1LL << 60);
int dg(int n){
if(n/10 == 0) return 1;
else return 1 + dg(n/10);
}
int main(){
int n; cin >> n;
int ans = 0;
rep(i,n+1){
if(i == 0) continue;
if(dg(i)%2 == 1) ans ++;
}
cout << ans << endl;
}
