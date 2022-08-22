#include <bits/stdc++.h>
using namespace std;
static const int INF = 1e9 + 7;
template<typename T>
using Vec = vector<T>;
template<typename T, typename T2>
using P = pair<T, T2>;
template<typename... Args>
using Tup = tuple<Args...>;
template<typename T>
using qp = priority_queue<T, Vec<T>, greater<T> >;
template<typename T>
using pq = priority_queue<T>;
using llong = long long;
using ullong = unsigned long long;
using uint = unsigned int;
template<typename T>
T gcd(T x, T y)
{
return y ? gcd(y, x % y) : x;
}
void hawawa()
{
int n, l;
cin >> n >> l;
long long ans = 0;
for (int i = 0; i < n; i++) {
ans += i + l;
}
if (0 <= l) {
ans -= l;
}
else if (n <= -l) {
ans -= n - 1 + l;
}
cout << ans << "\n";
}
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
hawawa();
}
