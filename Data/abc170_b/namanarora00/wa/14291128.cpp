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
int ok = 1;
ll q = y - 2 * x;
ok &= q >= 0 and q % 2 == 0;
q /= 2;
ok &= x - q >= 0;
cout << (ok ? "YES" : "NO");
}
