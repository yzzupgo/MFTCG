#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define REP(i,N) for (int i = 0; i < N; i++)
#define ANS(a) cout << a << endl;
#define SORT(V) sort(V.begin(), V.end())
#define RSORT(V) sort(V.rbegin(), V.rend())
#define DBG(V) for (auto v : V) cout << v << " "; cout << endl
int N, L;
int
main()
{
cin >> N >> L;
int ans = 0;
REP(i, N) {
ans += L + i;
}
if (0 < L) {
ans -= L;
}
if (L < 0 && L + N <= 0) {
ans -= L + N - 1;
}
ANS(ans);
return 0;
}
