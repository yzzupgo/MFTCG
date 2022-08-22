#include <bits/stdc++.h>
#define INF 1000000000
#define ll long long
using namespace std;
int main()
{
ll N;
cin >> N;
ll ans = 0;
for (ll i = 1; i < N + 1; ++i)
{
string n = to_string(i);
if (n.size() % 2 == 1)
{
ans += 1;
}
}
cout << ans << endl;
}
