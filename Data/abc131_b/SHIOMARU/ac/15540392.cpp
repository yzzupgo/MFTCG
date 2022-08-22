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
int N, L;
cin >> N >> L;
vector<int> A(N);
int ans = 0, res = 1e+9;
REP(i, N){
A[i] = L+i;
ans += A[i];
if (abs(A[i]) < abs(res)){
res = A[i];
}
}
ans = ans - res;
cout << ans << endl;
}
