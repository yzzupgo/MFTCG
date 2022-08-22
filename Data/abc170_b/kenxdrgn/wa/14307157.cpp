#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define rep2(i,s,n) for (int i = s; i < (int)(n); i++)
#define chmax(a,b) a = max(a, b)
#define chmin(a,b) a = min(a, b)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
using namespace std;
using ll = long long;
using pii = pair<int, int>;
void solve()
{
int x, y;
cin >> x >> y;
vector<int> v = {2, 4};
int a = 0;
while (x) {
if (2 * x + a == y) {
cout << "YES" << endl;
return;
}
x--;
a += 4;
}
cout << "NO" << endl;
}
int main(void)
{
ios::sync_with_stdio(0);
cin.tie(0);
solve();
}
