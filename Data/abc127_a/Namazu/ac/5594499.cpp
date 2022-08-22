#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define REP(i,n) for(ll (i)=0;(i)<(n);(i)++)
#define RREP(i,n) for(ll (i)=(n)-1;(i)>=0;(i)--)
#define FOR(i,a,b) for(ll (i)=(a);(i)<(b);(i)++)
#define FORR(i,a,b) for(ll (i)=(b)-1;(i)>=(a);(i)--)
#define DEBUG(x) cout << #x << ": " << x << endl
#define CHMAX(a,b) a=max((a),(b))
#define CHMIN(a,b) a=min((a),(b))
int main() {
ll a,b;
cin >> a >> b;
if(a<6) cout << 0 << endl;
else if(a>12) cout << b << endl;
else cout << b/2 << endl;
return 0;
}
