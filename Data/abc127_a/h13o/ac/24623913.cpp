#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int INF = 1e9;
const ll LINF = 1e18;
#define vi vector<int>
#define vvi vector<vector<int>>
#define vll vector<ll>
#define vvll vector<vector<ll>>
#define REP(i,n) for (int i = 0; i < (int)(n); ++i)
#define RREP(i,n) for (int i = (n)-1; i >= 0; --i)
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define RFOR(i,a,b) for (int i = (b)-1; i >= (a); --i)
int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);
constexpr char endl = '\n';
ll A, B;
cin >> A >> B;
if (A < 6) {
B = 0;
} else if (A < 13) {
B /= 2;
}
cout << B << endl;
}
