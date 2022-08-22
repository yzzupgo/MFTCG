#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define ALL(c) (c).begin(), (c).end()
using namespace std;
using ll = long long int;
using pii = pair<int,int>;
using vi = vector<int>;
using vvi = vector<vi>;
const long long INF = 1LL << 60;
int main()
{
int n; cin >> n;
if (1 <= n && n <= 9) cout << n << endl;
if (10 <= n && n <= 99) cout << 9 << endl;
if (100 <= n && n <= 999) cout << 9+(n-100)+1 << endl;
if (1000 <= n && n <= 9999) cout << 9+900+(n-1000)+1 << endl;
if (10000 <= n && n <= 99999) cout << 9+900+(n-10000)+1 << endl;
else cout << 9+900+90000 << endl;
}
