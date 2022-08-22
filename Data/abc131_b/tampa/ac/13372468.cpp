#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n) FOR(i, 0, n)
#define whole(x) (x).begin(),(x).end()
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end())
using P = pair<int, int>;
#define debug(var) cerr << "[" << #var << "] " << var << endl
#define chmin(x,y) x = min(x, y)
const ll mod = 1000000007;
int main()
{
int n, l;
cin >> n >> l;
int sum = 0;
int m = 1000000;
rep(i, n) {
sum += l+i;
if (abs(l+i)<abs(m)) m = l + i;
}
sum -= m;
cout << sum << endl;
return 0;
}
