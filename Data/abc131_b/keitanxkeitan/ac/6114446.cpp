#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std; void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }
void _main()
{
int N, L;
cin >> N >> L;
int sum = 0;
rep(i, 0, N)
{
const int taste = L + i;
sum += taste;
}
int ans = 0;
int minAbs = 1 << 30;
rep(i, 0, N)
{
const int taste = L + i;
const int tmp = sum - taste;
if (chmin(minAbs, abs(sum - tmp)))
{
ans = tmp;
}
}
cout << ans << endl;
}
