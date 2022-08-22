#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using pint = pair<int, int>;
using pll = pair<ll, ll>;
using Edge = pair<int, ll>;
using Graph = vector<vector<int>>;
using WeightedGraph = vector<vector<Edge>>;
const ll INF64 = 1LL << 60;
const int INF32 = 1 << 29;
const ll MOD = 1000000007;
const int CASES = 3;
void solve() {
ll X, Y; cin >> X >> Y;
ll m = 2 * X;
ll M = 4 * X;
string ans = "No";
if(m <= Y && Y <= M) ans = "Yes";
cout << ans << endl;
}
int main() {
#ifdef MYLOCAL
vector<string> filenames {"input1.txt", "input2.txt", "input3.txt", "input4.txt", "input5.txt"};
cout << "------------\n";
for(int i = 0; i < CASES; ++i){
ifstream in(filenames[i]);
cin.rdbuf(in.rdbuf());
solve();
cout << "------------\n";
}
#else
solve();
#endif
return 0;
}
