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
#include<unordered_map>
#include<unordered_set>
#include<utility>
#include<vector>
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
#define D()
#define MAXR 100000
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define INITA(a,i,j,v) for(ll k=i;k<=j;k++){a[k]=v;}
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL<<60;
const long long MOD = 1000000007;
int get_digits(ll a) {
if (a == 0) {
return 1;
}
int digit = 0;
while (a != 0) {
a /= 10;
digit++;
}
return digit;
}
int main() {
ll n; cin >> n;
int digits = get_digits(n);
ll tot = 0;
ll tmp = 0;
for (int i=1; i<=digits-1; i++) {
if (i % 2 != 0) {
tot += pow(10, i) - pow(10, i-1);
}
}
if (digits % 2 != 0 && digits != 1) {
tot += n - pow(10, digits-1) + 1;
}
cout << tot << endl;
return 0;
}
