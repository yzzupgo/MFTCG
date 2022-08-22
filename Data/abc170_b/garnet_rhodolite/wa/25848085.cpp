#include "bits/stdc++.h"
#define _CRT_SECURE_NO_WARNINGS
#define REP(i,n) for (int i = 0; i < (int)(n); i++)
#define ALL(x) (x).begin(), (x).end()
#define MOD 1000000007
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
using namespace std;
using ll = long long;
using ld = long double;
using P = pair<ll, ll>;
const int INF = 1 << 30;
ll gcd(ll p, ll q) { while (q) { ll t = p % q; p = q; q = t; } return p; }
ll modpow(ll a, ll n, int m) { ll x = 1; for (a %= m; n; n /= 2)n & 1 ? x = x * a % m : 0, a = a * a % m; return x; }
ll digit_sum(string s) { ll n = stoll(s), sum{ 0LL }; while (n != 0) { sum = sum + n % 10; n = n / 10; } return sum; }
int ctoi(const char c) {if ('0' <= c && c <= '9') return (c - '0'); return -1;}
signed main()
{
cin.tie(nullptr);
ios::sync_with_stdio(false);
std::cout << std::fixed << std::setprecision(14);
int X, Y;
cin >> X >> Y;
string ans = "No";
for (int xi = 1; xi <= X; xi++) {
int crane = xi;
int turtle = X - xi;
if (2 * crane + 4 * turtle == Y) {
ans = "Yes";
break;
}
}
cout << ans << "\n";
return EXIT_SUCCESS;
}
