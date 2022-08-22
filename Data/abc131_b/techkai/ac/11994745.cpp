#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
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
const ll INF = 1e18L + 1;
int main() {
int N, L; cin >>N>>L;
vi apples(N);
int mn=1e9;
rep(i,N) {
int x = L+i;
int dif = abs(x-0);
if (dif<abs(mn-0))
mn = x;
}
int aji = L*N+N*(N-1)/2;
cout << aji - mn << endl;
return 0;
}
