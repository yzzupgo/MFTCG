#include <bits/stdc++.h>
#define REP(i,n) for(ll i=0;i<(ll)(n);i++)
#define REPD(i,n) for(ll i=n-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=a;i<=(ll)(b);i++)
#define FORD(i,a,b) for(ll i=a;i>=(ll)(b);i--)
#define ALL(x) (x).begin(),(x).end()
#define SIZE(x) ((ll)(x).size())
#define MAX(x) *max_element(ALL(x))
#define MIN(x) *min_element(ALL(x))
#define INF 1000000000
using namespace std;
typedef long long ll;
int main() {
int X, Y;
cin >> X >> Y;
bool flag = false;
REP(i, 101){
int t = X - i;
if(i*2 + t*4 == Y){
flag = true;
break;
}
}
if(flag) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
