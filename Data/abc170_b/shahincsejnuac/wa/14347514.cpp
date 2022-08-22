#include <bits/stdc++.h>
#define lli long long int
#define timesave ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
void solve()
{
int x, y;
cin >> x >> y;
int yy = y - (2*x);
yy /= 2;
int xx = x-yy;
int tot = xx + yy;
if(tot == x) cout << "Yes" << "\n";
else cout << "No" << "\n";
}
int main()
{
int tc = 1;
while(tc--) solve();
return 0;
}
