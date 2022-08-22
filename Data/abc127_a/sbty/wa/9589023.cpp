#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for (int i = 0; i < (n); ++i)
#define Cout(s) cout << s << endl;
typedef long long ll;
typedef pair<int, int> P;
const ll INF = 1ll << 60;
ll MOD = 1e9 + 7;
int main()
{
int a, b;
cin >> a >> b;
int ans = 0;
if (a >= 6 && a <= 12)
{
ans = b / 2;
}
else if (a <= 5)
{
ans = b / 4;
}
else
{
ans = b;
}
Cout(ans);
return 0;
}
