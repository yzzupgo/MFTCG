#include <bits/stdc++.h>
#define REP(i,n) for (int i = 0; i < n; i++)
using namespace std;
typedef unsigned long ul;
typedef long long ll;
typedef pair<ul, ul> P;
int main()
{
int N, L;
cin >> N >> L;
if (L >= 0)
{
cout << ((2 * L + N - 1) * N) / 2 - L;
}
else if (L < 0 && N + L - 1 >= 0)
{
cout << ((2 * L + N - 1) * N) / 2;
}
else
{
cout << ((2 * L + N - 1) * N) / 2 - (L + N - 1);
}
}
