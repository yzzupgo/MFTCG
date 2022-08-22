#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;
using pii = pair<int, int>;
using vi64 = vector<int64_t>;
using vvi64 = vector<vi64>;
#define rep(i,n) for (int64_t i = 0; i < (n); ++i)
#define repe(i,n) for (int64_t i = 0; i <= (n); ++i)
#define reps(i,s,n) for (int64_t i = (s); i < (n); ++i)
#define repse(i,s,n) for (int64_t i = (s); i <= (n); ++i)
#define repr(i,n) for (int64_t i = (n); i >= 0; --i)
#define all(xs) (xs).begin(), (xs).end()
#define pp_vec(xs) rep (i, (xs).size()) if { (i) cout << endl; cout << (xs)[i] << " "; };
const int64_t inf = (int64_t)1e18;
const int64_t mod = (int64_t)1e9 + 7;
int main() {
cin.tie(0);
ios::sync_with_stdio(false);
int A, B; cin >> A >> B;
if (A >= 13) printf("%d\n", B);
else if (A >= 6) printf("%d\n", B / 2);
else printf("0\n");
return 0;
}
