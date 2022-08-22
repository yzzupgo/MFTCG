#include<algorithm>
#include<bitset>
#include<cmath>
#include<complex>
#include<deque>
#include<functional>
#include<iomanip>
#include<iostream>
#include<iterator>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<stack>
#include<string>
#include<utility>
#include<vector>
#include<valarray>
using namespace std;
typedef long long ll;
#define REP(i,n) for(ll i=0;i<(ll)(n);i++)
#define REPD(i,n) for(ll i=n-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=a;i<=(ll)(b);i++)
#define FORD(i,a,b) for(ll i=a;i>=(ll)(b);i--)
#define ALL(x) (x).begin(),(x).end()
#define SIZE(x) ((ll)(x).size())
#define MAX(x) *max_element(ALL(x))
#define MIN(x) *min_element(ALL(x))
#define INF 1000000000000
#define MOD 1000000007
#define MAXR 100000
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define PI acos(-1.0)
#define answer(ans) cout<<ans<<endl;
#define input(N) cin >> N ;
signed main() {
int X,Y,RE;
string ans = "No";
cin >>X >>Y;
for(int i=0;i<=X;i++){
RE = 0;
RE = i*2;
RE += (X-i)*4;
if(RE==Y){
ans = "Yes";
}
}
answer(ans);
return 0;
}
