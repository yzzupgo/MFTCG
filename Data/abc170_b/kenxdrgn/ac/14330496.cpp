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
int a = 0;
int xi = x;
while (xi) {
if (2 * xi + a == y) {
cout << "Yes" << endl;
return;
}
xi--;
a += 4;
}
xi = x;
a = 0;
while (xi) {
if (4 * xi + a == y) {
cout << "Yes" << endl;
return ;
}
xi--;
a += 2;
}
cout << "No" << endl;
}
int main(void)
{
ios::sync_with_stdio(0);
cin.tie(0);
solve();
}
