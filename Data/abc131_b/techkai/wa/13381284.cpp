#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define ok() puts(ok?"Yes":"No");
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<vi> vvi;
typedef vector<ii> vii;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef set<int> si;
typedef map<string, int> msi;
typedef greater<int> gt;
typedef priority_queue<int, vector<int>, gt> minq;
typedef long long ll;
typedef pair<ll,ll> pll;
const ll LINF = 1e18L + 1;
const int INF = 1e9 + 1;
int main() {
int N,L; cin >>N>>L;
ll all = L*N;
all += N*(N-1)/2;
all -= min(abs(L), N+L-1);
cout << all << endl;
return 0;
}
