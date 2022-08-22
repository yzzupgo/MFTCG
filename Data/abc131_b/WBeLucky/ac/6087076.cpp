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
int min_num = 0;
for (int i = 0; i < N; i++) {
int tmp = L + i;
if (abs(tmp) < min) min = abs(tmp),min_num = tmp;
}
cout << sum - min_num << endl;
}
