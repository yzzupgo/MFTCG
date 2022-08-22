#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const double PI = acos(-1);
#define REP(i,n) for(ll i=0;i<ll(n);i++)
#define REPD(i,n) for(ll i=n-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=a;i<=ll(b);i++)
#define FORD(i,a,b) for(ll i=a;i>=ll(b);i--)
#define INF 2147483647;
int main(void){
ll a, b, ans = 0;
cin >> a >> b;
if(a > 13){
ans = b;
}else if(a > 6){
ans = b/2;
}
cout << ans;
}
