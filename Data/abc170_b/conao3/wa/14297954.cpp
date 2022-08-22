#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <tuple>
#include <cstdint>
#include <cstdio>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <deque>
#include <unordered_map>
#include <unordered_set>
#include <bitset>
#include <cctype>
using namespace std;
#define ll long long
#define ld long double
#define v vector
#define rep(i,n) for (int i = 0; i < (int)(n); ++i)
#define rep3(i,m,n) for (int i = (m); i < (int)(n); ++i)
#define rrep(i,n) for (int i = (int)(n)-1; i >= 0; --i)
#define rrep3(i,m,n) for (int i = (int)(n)-1; i >= (m); --i)
#define all(x) begin(x), end(x)
#define rall(x) end(x), begin(x)
#define endl '\n'
const string YES = "Yes";
const string NO = "No";
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
bool solve(ll X, ll Y) {
Y -= 2*X;
if (Y % 2 != 0)
return false;
if (Y < 2*X) return true;
else return false;
}
int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);
ll X, Y;
cin >> X >> Y;
auto ans = solve(X, Y);
cout << (ans ? YES : NO) << endl;
return 0;
}
