#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
#define PI 3.14159265358979
#define MOD 1000000007
using namespace std;
using ll = long long;
void solve()
{
int ans_num[6] = { 9, 0, 900, 0, 90000, 0 };
int n;
cin >> n;
int digit = 0;
int log = 1;
while(n / log > 0)
{
digit++;
log *= 10;
}
log /= 10;
int ans = 0;
for(int i = 0; i < digit - 1; ++i)
{
ans += ans_num[i];
}
if (digit & 1)
{
ans += n - log + 1;
}
cout << ans;
}
int main()
{
fastio;
solve();
return 0;
}
