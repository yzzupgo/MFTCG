#include <bits/stdc++.h>
using namespace std;
typedef long long lint;
#define RPT(i,b,e) for (int i = ((int)b); i <= ((int)e); i++)
#define RPT0(i,n) RPT(i, 0, ((int)n) - 1)
#define RPT1(i,n) RPT(i, 1, (n))
#define EACH(it,v) for (const auto& it : v)
#define ALL(v) v.begin(), v.end()
void resolve()
{
int X, Y;
cin >> X >> Y;
if (Y % 2 == 1) {
cout << "No" << endl;
return;
}
string ans = ((Y / 2 - X >= 0) && (Y / 2 - X <= X)) ? "Yes" : "No";
cout << ans << endl;
}
int main()
{
cin.tie(0);
ios::sync_with_stdio(false);
resolve();
return 0;
}
