#include <bits/stdc++.h>
#define REP(i,n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i,n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i,m,n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;
int main()
{
int A, B;
cin >> A >> B;
if (13 <= A)
cout << B << '\n';
else if (6 <= A)
cout << B / 2 << '\n';
else
cout << B << '\n';
return 0;
}
