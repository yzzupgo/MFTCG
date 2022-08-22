#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i,a,b) for (int i = (a); i < (b); i++)
#define FOR(i,a) for (int i = 0; i < (a); i++)
const int N = int(1e8) + 7;
void init(){
}
void solve(){
int n, l;
scanf("%d %d", &n, &l);
int ans = 0;
FOR(i, n) ans += l+i;
if(l+n < 0) ans -= l+n-1;
else if(l > 0) ans -= l;
printf("%d", ans);
}
const bool mtc = false;
int main(){
int t;
if(mtc){
scanf("%d", &t);
while(t--) solve();
}
else solve();
}
