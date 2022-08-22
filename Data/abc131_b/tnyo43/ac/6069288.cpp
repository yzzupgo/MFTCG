#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define REP(i,n) for (int i = 0; i < n; ++i)
const ll MAX = 1e5+10;
const ll MOD = 1e9+10;
int N, L;
int main() {
cin >> N >> L;
int total = 0;
int m = 10000;
REP (i, N) {
total += L+i;
m = min(m, abs(L+i));
}
if (m != 0 && L < 0) m *= -1;
cout << total - m << endl;
}
