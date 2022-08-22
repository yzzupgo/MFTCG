#include <bits/stdc++.h>
#define INF (int)1e9
#define endl "\n"
#define ll long long
#define ull unsigned long long
using namespace std;
int main()
{
ios::sync_with_stdio(false), cin.tie(NULL);
ll x, y;
cin >> x >> y;
int ok = 0;
for (int i = 0; i < 101; i++)
{
for (int j = 0; j < 101; j++)
{
if (i + j == x)
{
if (i * 2 + 4 * j == y)
ok = 1;
}
}
}
cout << (ok ? "YES" : "NO");
}
