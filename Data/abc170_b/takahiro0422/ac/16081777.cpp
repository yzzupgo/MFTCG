#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair <int, int>;
#define rep(i,n) for (int i = 0; i < (int) (n); i++)
#define repr(i,a,b) for (int i = a; i < b; i++)
#define each(i,mp) for (auto &i : mp)
const int INF = 1001001001;
int main()
{
int x, y;
cin >> x >> y;
string ans = "No";
rep(i, x + 1) {
int tmp = i * 2 + (x - i) * 4;
if (tmp == y) {
ans = "Yes";
}
}
cout << ans << endl;
return 0;
}
