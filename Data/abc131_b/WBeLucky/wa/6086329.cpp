#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ios() \
ios::sync_with_stdio(0); \
cin.tie(0); \
cout.tie(0)
signed main()
{
ios();
int N, L;
cin >> N >> L;
int sum = N * (L - 1) + N * (N+ 1) / 2;
int min = 1e9;
for (int i = 0; i < N; i++) {
int tmp = abs(L + i);
if (tmp < min) min = tmp;
}
cout << sum - min << endl;
}
