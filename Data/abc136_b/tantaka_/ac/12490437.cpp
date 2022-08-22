#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;
typedef long long ll;
#define rep(i,n) for (ll i = 0; i < (ll)(n); i++)
#define REP(a,b,m) for (ll a = (ll)(b); a < (ll)(m); a++)
int main()
{
ll n;
cin >> n;
if (n / 100000 > 0)
{
ll sum = n - 1 - 9000 - 90;
cout << sum << endl;
}
else if (n / 10000 > 0)
{
int sum = n - 9000 - 90;
cout << sum << endl;
}
else if (n / 1000 > 0)
{
cout << 999 - 90 << endl;
}
else if (n / 100 > 0)
{
cout << n - 90 << endl;
}
else if (n / 10 > 0)
{
cout << 9 << endl;
}
else
{
cout << n << endl;
}
}
