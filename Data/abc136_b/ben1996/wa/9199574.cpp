#include <bits/stdc++.h>
#include <math.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
const int MOD = 1000000007;
const int INF_32 = 1LL << 30;
const int64_t INF_64 = 1LL << 60;
int main()
{
int N;
cin >> N;
int ans = 0;
rep(i, N + 1)
{
if (to_string(i).size() % 2 == 1) {
ans++;
}
}
cout << ans << endl;
}
